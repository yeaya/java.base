/*
 * Copyright (c) 2025, Yao Yuan <yeaya@163.com>. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.  This file as subject to the
 * "Classpath" exception in the LICENSE file that accompanied this code.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include <java/lang/Machine.h>

#include <java/lang/Library.h>
#include <java/lang/AssertionStatusDirectives.h>
#include <java/lang/Class.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Module.h>
#include <java/lang/ModuleLayer.h>
#include <java/lang/Long.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/lang/StackOverflowError.h>
#include <java/lang/ThreadDeath.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/NoSuchMethodError.h>
#include <java/lang/Runnable.h>
#include <java/lang/ModuleInfo.h>
#include <java/lang/Thread.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/reflect/Modifier.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/SoftReference.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <java/io/FileInputStream.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/ProtectionDomain.h>
#include <java/lang/interpreter/ByteCodeClass.h>
#include <java/util/Optional.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/ArrayList.h>
#include <java/util/Properties.h>
#include <java/util/Iterator.h>
#include <java/util/Enumeration.h>
#include <java/util/Vector.h>
#include <java/util/Map$Entry.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/ConcurrentHashMap$ForwardingNode.h>
#include <java/lang/module/Configuration.h>
#include <java/lang/module/ModuleDescriptor.h>
#include <java/lang/module/ModuleDescriptor$Builder.h>
#include <java/lang/module/ModuleDescriptor$Requires$Modifier.h>
#include <java/lang/module/ModuleReference.h>
#include <java/lang/module/RuntimeModuleReader.h>
#include <java/lang/module/RuntimeModuleReference.h>
#include <java/lang/module/RuntimeModuleFinder.h>
#include <java/lang/module/ModuleFinder.h>
#include <java/lang/module/Resolver.h>
#include <java/lang/reflect/Proxy.h>
#include <java/lang/reflect/Proxy$ProxyBuilder.h>
#include <java/security/Security.h>
#include <jdk/internal/jrtfs/JrtFileSystem.h>
#include <jdk/internal/loader/ClassLoaders$BootClassLoader.h>
#include <jdk/internal/loader/ClassLoaders.h>
#include <jdk/internal/loader/URLClassPath.h>
#include <jdk/internal/reflect/UnsafeQualifiedObjectFieldAccessorImpl.h>
#include <jdk/internal/reflect/Reflection.h>
#include <jdk/internal/module/ModuleReferenceImpl.h>
#include <jdk/internal/module/SystemModuleFinders$SystemModuleFinder.h>
#include <jdk/internal/misc/TerminatingThreadLocal.h>
#include <jdk/internal/jimage/RuntimeImageLocation.h>
#include <sun/security/provider/SunEntries.h>
#include <java/io/File.h>
#include <java/io/File$TempDirectory.h>
#include <java/io/RandomAccessFile.h>
#include <jcpp.h>
#include <java/lang/ObjectManagerInternal.h>
#include <java/lang/ConstStringManager.h>
#include <java/lang/Logger.h>
#include <java.base.h>
#include "Platform.h"
#include "core/Arguments.h"
#include <string.h>

using namespace ::java::lang;
using namespace ::java::lang::module;
using namespace ::java::lang::ref;
using namespace ::java::lang::reflect;
using namespace ::java::io;
using namespace ::java::nio;
using namespace ::java::net;
using namespace ::java::util;
using namespace ::java::util::concurrent;
using namespace ::java::security;
using ::sun::security::provider::SunEntries;
using ::java::lang::interpreter::ByteCodeClass;
using ::jdk::internal::misc::TerminatingThreadLocal;
using namespace ::java::security;
using namespace ::jdk::internal::reflect;
using namespace ::jdk::internal::loader;
using namespace ::jdk::internal::module;
using namespace ::jdk::internal::jrtfs;
using namespace ::jdk::internal::jimage;

namespace java {
	namespace lang {

bool Machine::inited = false;
void* defaultProcessHandle = nullptr;
Class** Machine::pendingClasses = nullptr;
int32_t Machine::pendingClassesCount = 0;
Object0* Machine::lockObject = nullptr;
HashMap* Machine::registerClasses = nullptr;
Class* Machine::voidClass = nullptr;
Class* Machine::booleanClass = nullptr;
Class* Machine::byteClass = nullptr;
Class* Machine::charClass = nullptr;
Class* Machine::shortClass = nullptr;
Class* Machine::intClass = nullptr;
Class* Machine::longClass = nullptr;
Class* Machine::floatClass = nullptr;
Class* Machine::doubleClass = nullptr;
HashMap* Machine::simpleClasses = nullptr;

Module* JAVA_BASE_MODULE = nullptr;
ThreadGroup* mainThreadGroup = nullptr;
RuntimeModuleFinder* runtimeModuleFinder = nullptr;

#define JAVA_BASE_LIB_NAME "java.base"
#define JAVA_BASE_MODULE_NAME "java.base"

class LibItem : public Library {
public:
	LibItem(Library* library) {
		name = library->name;
		version = library->version;
		description = library->description;
		moduleInfo = library->moduleInfo;
		eventAction = library->eventAction;
		getPackages = library->getPackages;
		getClassEntry = library->getClassEntry;
		getResource = library->getResource;
		options = library->options;
	}
	void* handle = nullptr;
	bool inited = false;
	LibItem* next = nullptr;
};

static LibItem* rootLibItem = nullptr;

LibItem* findLibByName(const char* name) {
	LibItem* libItem = rootLibItem;
	while (libItem != nullptr) {
	//	ModuleInfo* mi = libItem->moduleInfo;
		if (strcmp(libItem->name, name) == 0) {
			break;
		}
		libItem = libItem->next;
	}
	return libItem;
}

$bytes* getResource(String* name) {
	LibItem* lib = rootLibItem;
	while (lib != nullptr) {
		$bytes* resources = lib->getResource(name);
		if (resources != nullptr) {
			return resources;
		}
		lib = lib->next;
	}
	return nullptr;
}

ModuleDescriptor* createModuleDescriptor(ModuleInfo* moduleInfo, $Array<$String>* packageArray) {
	$var(ModuleDescriptor$Builder, builder, ModuleDescriptor::newModule($cstr(moduleInfo->module)));
	$var(HashSet, packages, $new<HashSet>());
	if (packageArray != nullptr) {
		for (int32_t i = 0; i < packageArray->length; i++) {
			String* package = $fcast<String>(packageArray->get(i));
			packages->add(package);
		}
	}
	RequiresDirective* requiresInfo = moduleInfo->requiresDirectives;
	for (; requiresInfo != nullptr; requiresInfo++) {
		if (requiresInfo->isEnd()) {
			break;
		}
		$var(String, mn, $cstr(requiresInfo->module));
		$var(HashSet, flags, $new<HashSet>());

		if (requiresInfo->flags != nullptr) {
			$var(String, s, $str(requiresInfo->flags));
			$var(HashSet, targets, $new<HashSet>());
			$var($StringArray, sa, s->split(","));
			for (int32_t i = 0; i < sa->length; i++) {
				$var(String, flag, $fcast<String>(sa->get(i))->trim());
				$init(ModuleDescriptor$Requires$Modifier);
				if ($$str("TRANSITIVE")->equalsIgnoreCase(flag)) {
					flags->add(ModuleDescriptor$Requires$Modifier::TRANSITIVE);
				} else if ($$str("SYNTHETIC")->equalsIgnoreCase(flag)) {
					flags->add(ModuleDescriptor$Requires$Modifier::SYNTHETIC);
				} else if ($$str("MANDATED")->equalsIgnoreCase(flag)) {
					flags->add(ModuleDescriptor$Requires$Modifier::MANDATED);
				}
			}
		}
		builder->requires(flags, mn);
	}

	ExportsDirective* exportsInfo = moduleInfo->exportsDirectives;
	for (; exportsInfo != nullptr; exportsInfo++) {
		if (exportsInfo->isEnd()) {
			break;
		}
		$var(String, pkg, $cstr(exportsInfo->package));
		if (exportsInfo->modules != nullptr) {
			$var(String, modules, $cstr(exportsInfo->modules));
			$var(HashSet, targets, $new<HashSet>());
			$var($StringArray, sa, modules->split(","));
			for (int32_t i = 0; i < sa->length; i++) {
				$var(String, s, $fcast<String>(sa->get(i))->trim());
				targets->add(s);
			}
			builder->exports(pkg, (AbstractSet*)targets);
		} else {
			builder->exports(pkg);
		}
	}

	UsesDirective* usesInfo = moduleInfo->usesDirectives;
	for (; usesInfo != nullptr; usesInfo++) {
		if (usesInfo->isEnd()) {
			break;
		}
		$var(String, svr, $cstr(usesInfo->service));
		builder->uses(svr);
		$var(String, pn, Resolver::packageName(svr));
		//	packages->add(pn);
	}

	ProvidesDirective* providesInfo = moduleInfo->providesDirectives;
	for (; providesInfo != nullptr; providesInfo++) {
		if (providesInfo->isEnd()) {
			break;
		}
		$var(String, svr, $cstr(providesInfo->service));
		$var(String, pn, Resolver::packageName(svr));
		//	packages->add(pn);
		if (providesInfo->impls != nullptr) {
			$var(String, impls, $cstr(providesInfo->impls));
			$var(ArrayList, list, $new<ArrayList>());
			$var($StringArray, sa, impls->split(","));
			for (int32_t i = 0; i < sa->length; i++) {
				$var(String, impl, $fcast<String>(sa->get(i))->trim());
				list->add(impl);
				$var(String, implPackageName, Resolver::packageName(impl));
				//			packages->add(implPackageName);
			}
			builder->provides(svr, (AbstractList*)list);
		}
	}
	builder->packages((AbstractSet*)packages);

	return builder->build();
}

bool Machine::isInited() {
	return inited;
}

String* encodeChar(char16_t ch) {
	const char table[] = "0123456789abcdef";
	char s[20];
	int v = ch;
	int index = 0;
	while (v > 0) {
		int remain = v % 16;
		v = v / 16;
		s[index] = table[remain];
		index++;
		s[index] = '\0';
	}
	int nzeros = 5 - index;
	$var($chars, result, $new<$chars>(6));
	result->set(0, '_');
	result->fill(1, nzeros + 1, '0');
	for (int i = nzeros + 1, j = index - 1; i < 6; i++, j--) {
		result->set(i, s[j]);
	}
	return $new<String>(result);
}

bool isalnum(char16_t ch) {
	return ch <= 0x7f && /* quick test */
		((ch >= 'A' && ch <= 'Z') ||
		 (ch >= 'a' && ch <= 'z') ||
		 (ch >= '0' && ch <= '9'));
}

String* encodeJni(String* name) {
	$var(StringBuilder, sb, $new<StringBuilder>(100));
	for (int32_t i = 0; i < name->length(); i++) {
		char16_t ch = name->charAt(i);
		if (isalnum(ch)) {
			sb->append(ch);
			continue;
		}
		switch (ch) {
		case '/':
		case '.':
			sb->append("_"_s);
			break;
		case '_':
			sb->append("_1"_s);
			break;
		case ';':
			sb->append("_2"_s);
			break;
		case '[':
			sb->append("_3"_s);
			break;
		default:
			sb->append($ref(encodeChar(ch)));
			break;
		}
	}
	return sb->toString();
}

void* Machine::loadNativeMethod(Class* clazz, MethodInfo* methodInfo) {
	$nullcheck(clazz);
	$nullcheck(methodInfo);
	$nullcheck(methodInfo->name);
	//log_debug("Machine::loadNativeMethod 1 %s.%s\n", clazz->getName()->c_str(), methodInfo->name);

	if (methodInfo->nativeAddress != nullptr) {
		return methodInfo->nativeAddress;
	}

	$var(StringBuilder, sb, $new<StringBuilder>(100));
	sb->append("Java_"_s);
	sb->append($ref(encodeJni($ref(clazz->getName()))));
	sb->append("_"_s);
	sb->append($ref(encodeJni($$str(methodInfo->name))));

	$var(String, nativeMethodName, sb->toString());

	void* entry = findLibraryEntry(defaultProcessHandle, nativeMethodName->c_str(), true);

	if (entry == nullptr && methodInfo->signature != nullptr) {
		// check isOverloaded
		sb->append("__"_s);
		sb->append($ref(encodeJni($$str(methodInfo->signature))));
		$assign(nativeMethodName, sb->toString());
		entry = findLibraryEntry(defaultProcessHandle, nativeMethodName->c_str(), true);
	}
	if (entry == nullptr) {
		$throwNew(NoSuchMethodError, nativeMethodName);
	}
	$synchronized(clazz) {
		if (methodInfo->nativeAddress == nullptr) {
			methodInfo->nativeAddress = entry;
		}
	}
	return entry;
}

ClassEntry* Machine::getClassEntry(String* name) {
	LibItem* lib = rootLibItem;
	while (lib != nullptr) {
		ClassEntry* classEntry = lib->getClassEntry(name);
		if (classEntry != nullptr) {
			return classEntry;
		}
		lib = lib->next;
	}
	return nullptr;
}

const char* getModuleByClassName(String* name) {
	LibItem* lib = rootLibItem;
	while (lib != nullptr) {
		ClassEntry* classEntry = lib->getClassEntry(name);
		if (classEntry != nullptr) {
			if (lib->moduleInfo != nullptr) {
				return lib->moduleInfo->module;
			}
			return nullptr;
		}
		lib = lib->next;
	}
	return nullptr;
}

Class* Machine::getPendingClass(const char* name) {
	if (name != nullptr) {
		for (int32_t i = 0; i < pendingClassesCount; i++) {
			Class* clazz = pendingClasses[i];
			if (clazz != nullptr && clazz->classInfo != nullptr && strcmp(clazz->classInfo->name, name) == 0) {
				return clazz;
			}
		}
		if (strcmp(name, "java.lang.Object") == 0) {
			return Object::class$;
		}
		return nullptr;
	}
	return nullptr;
}

void Machine::init1() {
	log_debug("Machine::init1 enter\n");
	LibItem* baseLib = findLibByName(JAVA_BASE_LIB_NAME);
	if (baseLib == nullptr) {
		java$base::init();
		baseLib = findLibByName(JAVA_BASE_LIB_NAME);
		if (baseLib == nullptr) {
			printf("can not find %s lib", JAVA_BASE_LIB_NAME);
			log_error("can not find %s lib", JAVA_BASE_LIB_NAME);
			exit(1);
		}
	}

	if (pendingClasses == nullptr) {
		pendingClasses = new Class* [65535];
	}
	String::COMPACT_STRINGS = true;

	ObjectManagerInternal::init();

	Class::load$(nullptr, false);
	Object::load$(nullptr, false);
	String::load$(nullptr, false);
	Void::load$(nullptr, false);
	OutOfMemoryError::load$(nullptr, false);
	InterruptedException::load$(nullptr, false);
	lockObject = $allocConst<Object0>();
	Void::VOID$ = $allocConst<Void>();

	StackOverflowError::load$(nullptr, false);

	ConstStringManager::init();

	Thread::load$(nullptr, false);

	$assignStatic(voidClass, createPrimitiveClass(("void")));
	$assignStatic(booleanClass, createPrimitiveClass(("boolean")));
	$assignStatic(byteClass, createPrimitiveClass(("byte")));
	$assignStatic(charClass, createPrimitiveClass(("char")));
	$assignStatic(shortClass, createPrimitiveClass(("short")));
	$assignStatic(intClass, createPrimitiveClass(("int")));
	$assignStatic(longClass, createPrimitiveClass(("long")));
	$assignStatic(floatClass, createPrimitiveClass(("float")));
	$assignStatic(doubleClass, createPrimitiveClass(("double")));

	$assignStatic(Boolean::TYPE, booleanClass);
	$assignStatic(Byte::TYPE, byteClass);
	$assignStatic(Short::TYPE, shortClass);
	$assignStatic(Integer::TYPE, intClass);
	$assignStatic(Long::TYPE, longClass);
	$assignStatic(Float::TYPE, floatClass);
	$assignStatic(Double::TYPE, doubleClass);
	$assignStatic(Character::TYPE, charClass);

	// baseLib->eventAction($PRELOAD);
	PreloadClassEvent preloadClassEvent;
	preloadClassEvent.preload = true;
	preloadClassEvent.preinit = false;
	baseLib->eventAction(JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS, &preloadClassEvent);

	// array class init
	ObjectArray::load$(nullptr, true);
	ObjectArray::EMPTY = $allocConst<ObjectArray>(0);
	ByteArray::load$(nullptr, true);
	ShortArray::load$(nullptr, true);
	IntArray::load$(nullptr, true);
	LongArray::load$(nullptr, true);
	FloatArray::load$(nullptr, true);
	DoubleArray::load$(nullptr, true);
	BooleanArray::load$(nullptr, true);
	CharArray::load$(nullptr, true);
	Reference::load$(nullptr, false);
	SoftReference::load$(nullptr, false);

	Thread* thread = $allocStatic<Thread>();
	thread->tid = Thread::threadSeqNumber + 1;
	Platform::registerMainThread(thread);
	mainThreadGroup = $allocStatic<ThreadGroup>();
	mainThreadGroup->init$();
	thread->init$(mainThreadGroup);

	System::load$(nullptr, true);
	Object::load$(nullptr, true);
	Thread::load$(nullptr, true);
	String::load$(nullptr, true);
	Class::load$(nullptr, true);
	Runnable::load$(nullptr, true);
	OutOfMemoryError::load$(nullptr, true);
	ThreadDeath::load$(nullptr, true);
	UnsafeQualifiedObjectFieldAccessorImpl::load$(nullptr, true);

	initPrimitiveClass(voidClass, "void");
	initPrimitiveClass(booleanClass, "boolean");
	initPrimitiveClass(byteClass, "byte");
	initPrimitiveClass(charClass, "char");
	initPrimitiveClass(shortClass, "short");
	initPrimitiveClass(intClass, "int");
	initPrimitiveClass(longClass, "long");
	initPrimitiveClass(floatClass, "float");
	initPrimitiveClass(doubleClass, "double");

	$assignStatic(registerClasses, $new<HashMap>(4096, 0.75f)); // must ensure initialCapacity is enough, avoid resize in clinit for base class

	$assignStatic(JAVA_BASE_MODULE, createModule(baseLib->moduleInfo, $ref(baseLib->getPackages())));
	$set(Object::class$, module, JAVA_BASE_MODULE);
	
	$init(AccessibleObject);

	// Thread::exit will use, avoid crash when OOM
	$init(TerminatingThreadLocal);

	ConcurrentHashMap$Node::load$(nullptr, true);
	ConcurrentHashMap$ForwardingNode::load$(nullptr, true);

	log_debug("Machine::init1 leave\n");
}

void processLibOptions(LibItem* lib, HashSet* addexports, HashSet* addopens) {
	const char** options = lib->options;
	while (*options != nullptr) {
		const char* option = *options;
		options++;
		if (strcmp(option, "--add-exports") == 0) {
			if (*options != nullptr) {
				addexports->add($cstr(*options));
				options++;
			} else {
				break;
			}
		}
		if (strcmp(option, "--add-opens") == 0) {
			if (*options != nullptr) {
				addopens->add($cstr(*options));
				options++;
			} else {
				break;
			}
		}
	}
}

void encodeProperties(HashSet* set, String* prefix) {
	$var(Iterator, it, set->iterator());
	int32_t index = 0;
	while (it->hasNext()) {
		$var(Object, value, it->next());
		$var(String, key, String::valueOf({prefix, $$str(index)}));
		System::getProperties()->put(key, value);
		index++;
	}
}

int64_t parseSize(String* arg) {
	if (arg == nullptr || arg->isEmpty()) {
		return 0;
	}
	try {
		if (arg->endsWith("k")) {
			return Long::parseLong(arg->substring(0, arg->length() - 1)) * 1024;
		} else if (arg->endsWith("m")) {
			return Long::parseLong(arg->substring(0, arg->length() - 1)) * 1024 * 1024;
		} else if (arg->endsWith("g")) {
			return Long::parseLong(arg->substring(0, arg->length() - 1)) * 1024 * 1024 * 1024;
		}
		return Long::parseLong(arg);
	} catch (Throwable& e) {
		e->printStackTrace();
	}
	return 0;
}

void processEnv() {
	$var(String, logLevel, System::getenv("JCPP_LOG_LEVEL"_s));
	Logger::setLevel(logLevel);

	$var(String, logConsole, System::getenv("JCPP_LOG_CONSOLE"_s));
	Logger::setConsole(logConsole);
}

void Machine::init2() {
	$var(HashSet, addexports, $new<HashSet>());
	$var(HashSet, addopens, $new<HashSet>());
	LibItem* lib = rootLibItem;
	while (lib != nullptr) {
		if (lib->options != nullptr) {
			processLibOptions(lib, addexports, addopens);
		}
		lib = lib->next;
	}
	
	// use UTF-8 as default charset
	//System::getProperties()->put("file.encoding"_s, "UTF-8"_s);

	processEnv();

	$var(File, f, $new<File>("jcpp.conf"_s));
	if (!f->exists()) {
		$assign(f, $new<File>("../conf/jcpp.conf"_s));
		if (!f->exists()) {
			const char* javaHome = Arguments::getJavaHome();
			$assign(f, $new<File>($$str({ $$str(javaHome), "/conf/jcpp.conf"_s })));
			if (!f->exists()) {
				const char* javaBasePath = Arguments::getJavaBasePath();
				$var(File, f0, $new(File, $str(javaBasePath)));
				$var(String, dir, f0->getParent());
				$assign(f, $new<File>($$str({ dir, "/jcpp.conf"_s })));
			}
		}
	}
	if (f->exists() && f->isFile() && f->canRead()) {
		$var(FileInputStream, fis, $new<FileInputStream>(f));
		$var(Properties, prop, $new<Properties>());
		try {
			prop->load(fis);
			$var(Iterator, it, $ref(prop->entrySet())->iterator());
			while (it->hasNext()) {
				$var(Map$Entry, e, $cast<Map$Entry>(it->next()));
				$var(String, key, $str($ref(e->getKey())));
				$var(String, value, $str($ref(e->getValue())));
				if (key->startsWith("-Xms")) {
					int64_t size = parseSize(value);
					ObjectManagerInternal::setXms(size);
				} else if (key->equals("-Xmx")) {
					int64_t size = parseSize(value);
					ObjectManagerInternal::setXmx(size);
				} else if (key->equals("-Xss")) {
					int64_t size = parseSize(value);
					ObjectManagerInternal::setXss(size);
				} else if (key->startsWith("--add-exports")) {
					addexports->add(value);
				} else if (key->startsWith("--add-addopens")) {
					addopens->add(value);
				} else if (key->startsWith("-D")) {
					$var(String, name, key->substring(2));
					System::getProperties()->put(name, value);
				} else if (key->startsWith("-cp") || key->startsWith("-classpath") || key->startsWith("--class-path")) {
					System::getProperties()->put("java.class.path"_s, value);
				} else if (key->equals("-jcpploglevel")) {
					Logger::setLevel(value);
				} else if (key->equals("-jcpplogconsole")) {
					Logger::setConsole(value);
				}
			}
		} catch(Throwable& e) {
			e->printStackTrace();
		}
	}

	encodeProperties(addexports, "jdk.module.addexports."_s);
	encodeProperties(addopens, "jdk.module.addopens."_s);

	if (!System::getProperties()->containsKey("java.security.manager"_s)) {
		System::getProperties()->put("java.security.manager"_s, "allow"_s);
	}
	$var(String, cp, $cast<String>(System::getProperties()->get("java.class.path"_s)));
	if (cp == nullptr || cp->isEmpty()) {
		$var(File, f, $new<File>("../lib"_s));
		if (f->exists()) {
			System::getProperties()->put("java.class.path"_s, $ref(f->getAbsolutePath()));
		} else {
			$assign(f, $new<File>("."_s));
			System::getProperties()->put("java.class.path"_s, $ref(f->getAbsolutePath()));
		}
	}

	$init(SunEntries);
	if (SunEntries::seedSource == nullptr || SunEntries::seedSource->isEmpty()) {
		$assignStatic(SunEntries::seedSource, SunEntries::URL_DEV_RANDOM);
	}

	$init(Reference);
}

void Machine::init3() {
	log_debug("Machine::init3 enter\n");
	Thread::currentThread()->setName("main"_s);
	Thread::currentThread()->getThreadGroup()->init$();
	ObjectManagerInternal::init2();
	$init(ConcurrentHashMap$ForwardingNode);

	LibItem* baseLib = findLibByName(JAVA_BASE_LIB_NAME);
	// baseLib->initLibrary($PREINIT);
	PreloadClassEvent preloadClassEvent;
	preloadClassEvent.preload = false;
	preloadClassEvent.preinit = true;
	baseLib->eventAction(JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS, &preloadClassEvent);

	$var(URLClassPath, ucp, $new<URLClassPath>(nullptr, false));
	LibItem* lib = rootLibItem;
	while (lib != nullptr) {
		if (lib->moduleInfo != nullptr) {
		}
		$var(String, uris, String::valueOf({"jrt:/"_s, $cstr(lib->name), "/"_s}));
		$var(URI, uri, URI::create(uris));
		$var(URL, url, uri->toURL());
		ucp->addURL(url);
		lib = lib->next;
	}
	ClassLoaders::BOOT_LOADER->setClassPath(ucp);

	$set(Module::ALL_UNNAMED_MODULE, loader, ClassLoader::scl);
	Module* javabase = $fcast<Module>(ModuleLayer::boot()->findModule($cstr(JAVA_BASE_MODULE_NAME))->get());
	$assignStatic(JAVA_BASE_MODULE, javabase);
	for (int32_t i = 0; i < pendingClassesCount; i++) {
		$set(pendingClasses[i], module, JAVA_BASE_MODULE);
	}
	delete[] pendingClasses;
	pendingClasses = nullptr;
	pendingClassesCount = 0;
	inited = true;
	ObjectManagerInternal::init3();

	baseLib->inited = true;
	lib = rootLibItem;
	while (lib != nullptr) {
		if (lib != baseLib) {
			// lib->initLibrary($PRELOAD | $PREINIT);
			PreloadClassEvent preloadClassEvent;
			preloadClassEvent.preload = true;
			preloadClassEvent.preinit = true;
			lib->eventAction(JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS, &preloadClassEvent);
		}
		lib = lib->next;
	}

	Platform::init2();

	log_debug("Machine::init3 leave\n");
}

void Machine::deinit() {
	ObjectManagerInternal::deinit();
}

bool Machine::isObject0(const char* descriptor) {
	if (descriptor[0] == '[') {
		return true;
	}
	if (strcmp(descriptor, "Ljava/lang/String;") == 0) {
		return true;
	}
	if (strcmp(descriptor, "java/lang/Object") == 0) {
		return false;
	}
	$var(String, name, $str(descriptor));
	$assign(name, name->substring(1, name->length() - 1));
	$assign(name, name->replace('/', '.'));
	LibItem* libItem = rootLibItem;
	while (libItem != nullptr) {
		ClassEntry* entry = libItem->getClassEntry(name);
		if (entry != nullptr) {
			if ($hasFlag(entry->mark, $CLASS)) {
				return true;
			}
			return false;
		}
		libItem = libItem->next;
	}
	return false;
}

ThreadGroup* Machine::getMainThreadGroup() {
	return mainThreadGroup;
}

void Machine::addLibrary(Library* lib) {
	if (lib == nullptr || lib->name == nullptr) {
		return;
	}
	if (rootLibItem == nullptr) {
		ObjectManagerInternal::init0();
		Platform::init();
		defaultProcessHandle = Platform::getDefaultProcessHandle();
	}
	
	LibItem* findedlib = findLibByName(lib->name);
	if (findedlib == nullptr) {
		char libpath[512];
		Platform::getLibraryWithAddress((void*)lib->getClassEntry, libpath, sizeof(libpath));
		char err[512];
		void* libHandle = Platform::loadLibrary(libpath, err, sizeof(err));
		// if (libHandle == nullptr && strlen(err) > 0) {
			// printf("load library fail, %s\n", err);
			// return;
		// }
		// void* e = Platform::findLibraryEntry(libHandle, "JNI_OnLoad_awt");
		void* buff = $allocRawStatic(sizeof(LibItem));
		LibItem* libItem = new(buff) LibItem(lib);
		libItem->handle = libHandle;
		libItem->next = rootLibItem;
		rootLibItem = libItem;
	}
}

bool Machine::isBuildinLibraryHandle(void* handle) {
	LibItem* lib = rootLibItem;
	while (lib != nullptr) {
		if (lib->handle == handle) {
			return true;
		}
		lib = lib->next;
	}
	return false;
}

void* Machine::findLibraryEntry(void* handle, const char* name, bool force) {
	void* entry = Platform::findLibraryEntry(handle, name);
	if (entry != nullptr) {
		return entry;
	}
	if (force || isBuildinLibraryHandle(handle)) {
		LibItem* lib = rootLibItem;
		while (lib != nullptr) {
			if (lib->handle != handle) {
				entry = Platform::findLibraryEntry(lib->handle, name);
				if (entry != nullptr) {
					return entry;
				}
				char err[512];
				Platform::getLastErrorDesc(err, sizeof(err));
				log_warning("findLibraryEntry fail, %s err:%s\n", name, err)
			}
			lib = lib->next;
		}
	}
	return nullptr;
}

void Machine::notifyThreadStart() {
	LibItem* lib = rootLibItem;
	while (lib != nullptr) {
		lib->eventAction(JCPP_LIB_EVENT_TYPE_THREAD_START, nullptr);
		lib = lib->next;
	}
}

ModuleFinder* Machine::getSystemModuleFinder() {
	if (runtimeModuleFinder == nullptr) {
		$assignStatic(runtimeModuleFinder, $new<RuntimeModuleFinder>());
		LibItem* lib = rootLibItem;
		while (lib != nullptr) {
			ModuleInfo* moduleInfo = lib->moduleInfo;
			if (moduleInfo != nullptr) {
				$var($String, moduleName, $str(moduleInfo->module))
				$var(URI, uri, $new<URI>($ref($String::valueOf({"jrt:/"_s, moduleName}))));
				$var(RuntimeModuleReader, moduleReader, $new<RuntimeModuleReader>(moduleName));
				moduleReader->library = lib;
				$var(ModuleDescriptor, descriptor, createModuleDescriptor(moduleInfo, $ref(lib->getPackages())));
				$var(RuntimeModuleReference, mref, $new<RuntimeModuleReference>(descriptor, uri, moduleReader));
				runtimeModuleFinder->add(moduleName, mref);
			}
			lib = lib->next;
		}
	}
	return runtimeModuleFinder;
}

Class* Machine::createPrimitiveClass(const char* name) {
	Class* clazz = $allocStatic<Class>();
	clazz->setPrimitive(true);
	clazz->state = Class::CLASS_STATE_INITIALIZING;
	return clazz;
}

void Machine::initPrimitiveClass(Class* clazz, const char* name) {
	$set(clazz, name, $cstr(name));
	clazz->state = Class::CLASS_STATE_INITIALIZED;
	pendingClasses[pendingClassesCount] = clazz;
	pendingClassesCount++;
}

Class* Machine::getPrimitiveClass(String* name) {
	if (name->equals("void")) {
		return voidClass;
	}
	if (name->equals("boolean")) {
		return booleanClass;
	}
	if (name->equals("byte")) {
		return byteClass;
	}
	if (name->equals("char")) {
		return charClass;
	}
	if (name->equals("short")) {
		return shortClass;
	}
	if (name->equals("int")) {
		return intClass;
	}
	if (name->equals("long")) {
		return longClass;
	}
	if (name->equals("float")) {
		return floatClass;
	}
	if (name->equals("double")) {
		return doubleClass;
	}
	return nullptr;
}

Class* Machine::forName0(String* name, bool initialize, ClassLoader* loader, Class* caller) {
	if ($nullcheck(name)->isEmpty()) {
		$throwNew(ClassNotFoundException, name);
	}
	Class* clazz = nullptr;
	if (name->charAt(0) == u'[') {
		clazz = loadClassInternal(name, nullptr);
		initialize = false;
	} else {
		/*
		if (inited && loader != nullptr) {
			//	_assign(clazz, findBootstrapClass(nullptr, name));
			clazz = loader->loadClass(name, initialize);
		} else {
			if (inited && ClassLoader::scl != nullptr) {
				clazz = $loadVolatile(ClassLoader::scl)->loadClass(name, initialize);
			} else {
				clazz = findBootstrapClass(nullptr, name);
			}
			//	return _Machine::instance()->findBootstrapClass(name);
		//	_assign(clazz, ClassLoader::getSystemClassLoader().is<ClassLoader>()->loadClass(name, initialize));
		}
		*/

		if (inited && loader == nullptr) {
			loader = ClassLoader::scl;
		}
		if (loader != nullptr) {
			clazz = loader->loadClass(name, initialize);
			//if (clazz != nullptr && clazz->classLoader == nullptr) {
			//	$set(clazz, classLoader, loader);
			//}
		} else {
			clazz = findBootstrapClass(nullptr, name);
		}
	}

	if (clazz == nullptr) {
	//	clazz = findBootstrapClass(nullptr, name);
		$throwNew(ClassNotFoundException, name);
	}
	if (initialize) {
		clazz->ensureClassInitialized();
	}
	//if (clazz != nullptr && clazz->classLoader == nullptr) {
	//	if (loader != nullptr) {
	//		_assign(clazz->classLoader, loader);
	//	} else {
	//		if (ClassLoader::scl != nullptr) {
	//			_assign(clazz->classLoader, ClassLoader::scl);
	//		}
	//	}
	//}

	return clazz;
}

Class* Machine::findBootstrapClass(ClassLoader* loader, String* name) {
	return loadClassInternal(name, loader);
}

Class* Machine::findLoadedClass0(ClassLoader* loader, String* name) {
	if (loader != nullptr && name != nullptr) {
		$synchronized(loader->classes) {
			int32_t size = loader->classes->size();
			for (int32_t i = 0; i < size; i++) {
				Class* clazz = $fcast<Class>(loader->classes->get(i));
				if (name->equals(clazz->getName())) {
					return clazz;
				}
			}
		}
	}
	return nullptr;
}

AssertionStatusDirectives* Machine::retrieveDirectives() {
	$var(AssertionStatusDirectives, asd, $new<AssertionStatusDirectives>());
	$set(asd, classes, $new<$StringArray>(0));
	$set(asd, classEnabled, $new<BooleanArray>(0));
	$set(asd, packages, $new<$StringArray>(0));
	$set(asd, packageEnabled, $new<BooleanArray>(0));
	return asd;
}

Class* Machine::findArrayClass(Class* componentType) {
	if (componentType->isArray()) {
		int32_t dim = 0;
		Class* type = componentType;
		while (type != nullptr) {
			if (type->componentType$ != nullptr) {
				type = type->componentType$;
				dim++;
			} else {
				break;
			}
		}
		if (dim >= 255) {
			$var(String, message, "["_s->concat(componentType->getName()));
			$throwNew(IllegalArgumentException, message);
		}
	}
	return createSubObjectArrayClass(nullptr, componentType);
}

Class* Machine::findClass(ClassLoader* loader, String* name) {
	Class* clazz = nullptr;
	if (registerClasses != nullptr) {
		clazz = $fcast<Class>(registerClasses->get(name));
	}
	if (clazz == nullptr) {
		clazz = loadClassInternal(name, loader);
	}
	return clazz;
}

Class* Machine::findClass(ClassLoader* loader, String* moduleName, String* className) {
	return findClass(loader, className); // TODO
}

URL* Machine::findResource($String* name) {
	//$bytes* bytes = getResource(name);
	//if (bytes != nullptr) {
	//	$var(String, uris, String::valueOf({"jrt:/"_s, Module::ALL_UNNAMED_MODULE->name, "/"_s, name }));
	//	$var(URI, uri, URI::create(uris));
	//	return uri->toURL();
	//}
	LibItem* lib = rootLibItem;
	while (lib != nullptr) {
		$bytes* resources = lib->getResource(name);
		if (resources != nullptr) {
			$var(String, uris, String::valueOf({"jrt:/"_s, $$str(lib->name), "/"_s, name}));
			$var(URI, uri, URI::create(uris));
			return $ref(uri->toURL());
		}
		lib = lib->next;
	}
	return nullptr;
}

$bytes* Machine::findResource($String* libName, $String* name) {
	$nullcheck(libName);
	$nullcheck(name);

	LibItem* lib = rootLibItem;
	while (lib != nullptr) {
		if (libName->equals(lib->name)) {
			$bytes* bytes = lib->getResource(name);
			// since one module maybe split into more libs, like test lib
			if (bytes != nullptr) {
				return bytes;
			}
		}
		lib = lib->next;
	}
	return nullptr;
}

Enumeration* Machine::findResources($String* name) {
	$var(Enumeration, e, $new<Enumeration>());
	$var(Vector, v, $new<Vector>());
	LibItem* lib = rootLibItem;
	while (lib != nullptr) {
		$bytes* resources = lib->getResource(name);
		if (resources != nullptr) {
			$var(String, uris, String::valueOf({"jrt:/"_s, $$str(lib->name), "/"_s, name}));
			$var(URI, uri, URI::create(uris));
			v->add($ref(uri->toURL()));
		}
		lib = lib->next;
	}
	if (v->isEmpty()) {
		return nullptr;
	}
	return v->elements();
}

LibItem* getLib(String* module) {
	LibItem* lib = rootLibItem;
	while (lib != nullptr) {
		if (lib->moduleInfo != nullptr) {
			if (module->equals(lib->moduleInfo->module)) {
				return lib;
			}
		}
		lib = lib->next;
	}
	return nullptr;
}

int32_t getModuleCount() {
	int32_t moduleCount = 0;
	LibItem* lib = rootLibItem;
	while (lib != nullptr) {
		if (lib->moduleInfo != nullptr) {
			moduleCount++;
		}
		lib = lib->next;
	}
	return moduleCount;
}

RuntimeImageLocation* Machine::findLocation($String* name) {
	if (name->equals("/modules")) {
		$var(RuntimeImageLocation, loc, $alloc<RuntimeImageLocation>());
		int32_t moduleCount = getModuleCount();
		$set(loc, children, $new<$StringArray>(moduleCount));
		LibItem* lib = rootLibItem;
		int32_t index = 0;
		while (lib != nullptr) {
			if (lib->moduleInfo != nullptr) {
				loc->children->set(index, $str(lib->moduleInfo->module));
			}
			lib = lib->next;
		}
		return loc;
	}

	bool isModules = name->startsWith("/modules"_s);//395
	if (isModules) {
		$var(String, mn, nullptr);
		int32_t index = "/modules"_s->length() + 1;
		int32_t endIndex = name->indexOf("/", index);
		if (endIndex > 0) {
			$assign(mn, name->substring(index, endIndex));
		} else {
			$assign(mn, name->substring(index));
		}
		LibItem* item = getLib(mn);
		if (item != nullptr) {
			$var(RuntimeImageLocation, loc, $alloc<RuntimeImageLocation>());
			loc->location = (int64_t)item;
			$set(loc, base, mn);
			return loc;
		}
	} else {
		$var(String, mn, nullptr);
		int32_t endIndex = name->indexOf("/", 1);
		if (endIndex > 0) {
			$assign(mn, name->substring(1, endIndex));
		} else {
			return nullptr;
		}
		$var(String, rn, name->substring(endIndex + 1));
		$var($bytes, data, findResource(mn, rn));
		if (data != nullptr) {
			$var(RuntimeImageLocation, loc, $alloc<RuntimeImageLocation>());
			loc->size = data->length;
			$set(loc, module, mn);
			$set(loc, base, rn);
			return loc;
		}
	}

	return nullptr;
}

$bytes* Machine::getResource0(RuntimeImageLocation* loc) {
	return findResource(loc->module, loc->base);
}

void Machine::ensureInitialized(Class* clazz) {
	$nullcheck(clazz)->initialize();
}

void saveClassToFile(String* name, $bytes* b, int32_t off, int32_t len, ByteCodeClass* clazz) {
//#define SAVE_DEFINE_CLASS
#ifdef SAVE_DEFINE_CLASS
	int32_t index = clazz->classIndex;
	$var(String, dir, String::valueOf({$ref(File$TempDirectory::location()->getAbsolutePath()), File::separator, "jcppclass"_s}));
	$var(File, dirFile, $new<File>(dir));
	if (dirFile != nullptr && !dirFile->exists()) {
		dirFile->mkdirs();
	}
	$var(String, path, String::valueOf({ dir, File::separator, name, "_"_s, $$str(index), ".class"_s}));
	$var(RandomAccessFile, raf, $new<RandomAccessFile>(path, "rw"_s));
	raf->writeBytes(b, off, len);
	raf->close();
#endif
}

Class* Machine::defineClass1(ClassLoader* loader, String* name, $bytes* b, int32_t off, int32_t len, ProtectionDomain* pd, String* source) {
	$var(String, newName, name->replace('/', '.'));

	$var(ByteCodeClass, byteCodeClass, ByteCodeClass::create(b, off, len));
	saveClassToFile(newName, b, off, len, byteCodeClass);

	byteCodeClass->init(newName, loader);

	if (loader == nullptr) {
		loader = ClassLoader::scl;
	}
	if (loader != nullptr) {
		loader->addClass(byteCodeClass);
	} else {
		// TODO add to native class loader
	}
	$var(Module, module, findModule(byteCodeClass));
	if (module != nullptr) {
		$set(byteCodeClass, module, module);
	} else {
		$set(byteCodeClass, module, Module::ALL_UNNAMED_MODULE);
	}
	return byteCodeClass;
}

Class* Machine::defineClass2(ClassLoader* loader, String* name, ByteBuffer* b, int32_t off, int32_t len, ProtectionDomain* pd, String* source) {
	$throwNew(UnsupportedOperationException);
	return nullptr;
}

/*
flags: properties of the class
enum {
  NESTMATE  			= ::java::lang::invoke::MethodHandleNatives$Constants::NESTMATE_CLASS,
  HIDDEN_CLASS  		= ::java::lang::invoke::MethodHandleNatives$Constants::HIDDEN_CLASS,
  STRONG_LOADER_LINK	= ::java::lang::invoke::MethodHandleNatives$Constants::STRONG_LOADER_LINK,
  ACCESS_VM_ANNOTATIONS = ::java::lang::invoke::MethodHandleNatives$Constants::ACCESS_VM_ANNOTATIONS
};
 classData: private static pre-initialized field
*/
Class* Machine::defineClass0(ClassLoader* loader, Class* lookup, String* name, $bytes* b, int32_t off, int32_t len, ProtectionDomain* pd, bool initialize, int32_t flags, Object$* classData) {
	$var(String, newName, name->replace('/', '.'));
	$var(ByteCodeClass, byteCodeClass, ByteCodeClass::create(b, off, len));
	saveClassToFile(newName, b, off, len, byteCodeClass);

	byteCodeClass->hidden = true;

	$set(byteCodeClass, classData, classData);

	byteCodeClass->init(newName, loader);
	if (loader != nullptr) {
	//	loader->addClass(byteCodeClass);
	} else {
		// TODO add to native class loader
	}
	$var(Module, module, findModule(byteCodeClass));
	if (module != nullptr) {
		$set(byteCodeClass, module, module);
	} else {
		$set(byteCodeClass, module, Module::ALL_UNNAMED_MODULE);
	}
	if (initialize) {
		byteCodeClass->ensureClassInitialized();
	}
	return byteCodeClass;
}

Class* Machine::loadClass(String* name, bool initialize, Class** pClazz, int64_t size, int32_t mark, ClassInfo* classInfo, $InitClassFunction initClassFunction,
		$AllocateInstanceFunction allocateInstanceFunction, $InitInstanceFunction initInstanceFunction,
		$InvokeSpecialFunction invokeSpecialFunction, $InvokeFunction invokeFunction) {
	if (*pClazz != nullptr) {
		if (initialize) {
			if ((*pClazz)->state == Class::CLASS_STATE_INITIALIZED) {
				return *pClazz;
			}
		} else {
			return *pClazz;
		}
	}
	{
		$ObjectMonitorGuardAllowNull omg(lockObject);
		if (*pClazz == nullptr) {
			Class* clazz = nullptr;
			// check pClass is Class::class$
			if (&Class::class$ == pClazz) {
				clazz = ObjectManager::allocClassClass();
			} else {
				clazz = $allocStatic<Class>();
			}
			// if (classInfo != nullptr) {
			// 	if (initialize) {
			// 		static int count = 0;
			// 		printf("init %d %s\n", count++, classInfo->name);
			// 	} else {
			// 		static int count = 0;
			// 		printf("load %d %s\n", count++, classInfo->name);
			// 	}
			// }
			clazz->size = (int32_t)size;
			clazz->mark = mark;
			clazz->classInfo = classInfo;
			clazz->initClassFunction = initClassFunction;
			clazz->allocateInstanceFunction = allocateInstanceFunction;
			clazz->initInstanceFunction = initInstanceFunction;
			clazz->invokeSpecialFunction = invokeSpecialFunction;
			clazz->invokeFunction = invokeFunction;
			clazz->initObjectFieldOffset();
			if (name != nullptr) {
				$set(clazz, name, name);
			}
			if (inited) {
				$var(Module, module, findModule(clazz));
				if (module != nullptr) {
					$set(clazz, module, module);
				} else {
					$set(clazz, module, Module::ALL_UNNAMED_MODULE);
				}
			} else {
				pendingClasses[pendingClassesCount] = clazz;
				pendingClassesCount++;
			}

			if (inited) {
			//	$assign(caller, Reflection::getCallerClass());
			//	if (caller != nullptr) {
			//		$set(clazz, classLoader, caller->classLoader);
			//	}
			}

			if (clazz->module != nullptr) {
				$set(clazz, classLoader, clazz->module->loader);
			} else {
		//		$set(clazz, classLoader, ClassLoader::getSystemClassLoader());
			}
			*pClazz = clazz;
		}
	}
	if (initialize) {
		(*pClazz)->initialize();
	}

	return *pClazz;
}

Class* Machine::loadClass(Class** pClazz, int64_t arrayBaseSize, int32_t mark, ClassInfo* classInfo) {
	//printf("loadClass %s\n", classInfo->name);

	if (*pClazz != nullptr && (*pClazz)->state == Class::CLASS_STATE_INITIALIZED) {
		return *pClazz;
	}
	{
		$ObjectMonitorGuardAllowNull omg(lockObject);
		if (*pClazz == nullptr) {
			Class* clazz = $allocStatic<Class>();
		//	printf("load %s\n", classInfo->name);
			clazz->size = (int32_t)arrayBaseSize;
			clazz->mark = mark;
			clazz->classInfo = classInfo;
			Class* componentType = nullptr;
			if (strcmp(classInfo->name, "[B") == 0) {
				clazz->arrayIndexScale = 1;
				componentType = Machine::byteClass;
			} else if (strcmp(classInfo->name, "[Z") == 0) {
				clazz->arrayIndexScale = 1;
				componentType = Machine::booleanClass;
			} else if (strcmp(classInfo->name, "[C") == 0) {
				clazz->arrayIndexScale = 2;
				componentType = Machine::charClass;
			} else if (strcmp(classInfo->name, "[S") == 0) {
				clazz->arrayIndexScale = 2;
				componentType = Machine::shortClass;
			} else if (strcmp(classInfo->name, "[I") == 0) {
				clazz->arrayIndexScale = 4;
				componentType = Machine::intClass;
			} else if (strcmp(classInfo->name, "[J") == 0) {
				clazz->arrayIndexScale = 8;
				componentType = Machine::longClass;
			} else if (strcmp(classInfo->name, "[F") == 0) {
				clazz->arrayIndexScale = 4;
				componentType = Machine::floatClass;
			} else if (strcmp(classInfo->name, "[D") == 0) {
				clazz->arrayIndexScale = 8;
				componentType = Machine::doubleClass;
			} else {
				clazz->arrayIndexScale = sizeof(void*);
				componentType = Object::class$;
			}
		
			clazz->state = Class::CLASS_STATE_INITIALIZED;
			$set(clazz, componentType$, componentType);
			$set(componentType, arrayType$, clazz);
			if (JAVA_BASE_MODULE != nullptr) {
				$set(clazz, module, JAVA_BASE_MODULE);
			} else {
				pendingClasses[pendingClassesCount] = clazz;
				pendingClassesCount++;
			}
			*pClazz = clazz;
		}
	}
	return *pClazz;
}

Class* Machine::loadClass(String* name, int64_t size, int32_t mark, bool isBaseOfObject) {
	$nullcheck(name);

	$ObjectMonitorGuardAllowNull omg(lockObject);
	if (simpleClasses == nullptr) {
		$assignStatic(simpleClasses, $new<HashMap>());
	}
	Class* clazz = $fcast<Class>(simpleClasses->get(name));
	if (clazz == nullptr) {
		clazz = $allocStatic<Class>();
		$set(clazz, name, name);
		if (isBaseOfObject) {
			clazz->setSuperClass(Object::class$);
		}
		clazz->mark = mark;
		clazz->size = (int32_t)size;
		clazz->initObjectFieldOffset();
		simpleClasses->put(name, clazz);
	}

	return clazz;
}

Class* Machine::createSubObjectArrayClass(String* name, Class* componentType) {
	$nullcheck(componentType);
	$synchronized(componentType) {
		if (componentType->arrayType$ != nullptr) {
			return componentType->arrayType$;
		}
		Class* arrayType = $allocStatic<Class>();
		Class* objectArrayClass = ObjectArray::class$;
		arrayType->mark = objectArrayClass->mark;
		arrayType->classInfo = objectArrayClass->classInfo;
		arrayType->size = objectArrayClass->size;
		arrayType->arrayIndexScale = objectArrayClass->arrayIndexScale;
		$set(arrayType, name, name);
		$set(arrayType, componentType$, componentType);
		$set(componentType, arrayType$, arrayType);
		arrayType->state = Class::CLASS_STATE_INITIALIZED;
		if (JAVA_BASE_MODULE != nullptr) {
			$set(arrayType, module, JAVA_BASE_MODULE);
		} else {
			pendingClasses[pendingClassesCount] = arrayType;
			pendingClassesCount++;
		}
		return arrayType;
	}
}

Module* Machine::createModule(ModuleInfo* moduleInfo, $Array<String>* packageArray) {
	$var(ModuleDescriptor, descriptor, createModuleDescriptor(moduleInfo, packageArray));
	return $new<Module>(nullptr, ClassLoader::scl, descriptor, nullptr);
}

void Machine::registerClass(Class* clazz) {
	registerClasses->put(clazz->name, clazz);
}

// $lambda$
bool Machine::isLambdaClass(String* name) {
	return $nullcheck(name)->indexOf("$$Lambda$") > 0;
}

String* Machine::getLambdaHoder(String* name) {
	int32_t index = $nullcheck(name)->indexOf("$$Lambda$");
	if (index > 0) {
		$var(String, holder, name->substring(0, index));
		return holder;
	}
	return nullptr;
}

bool Machine::isLambdaMethod(String* name) {
	return $nullcheck(name)->contains("lambda$");
}

Class* Machine::loadClassInternal(String* name, ClassLoader* loader) {
	Class * primitiveClass = getPrimitiveClass(name);
	if (primitiveClass != nullptr) {
		return primitiveClass;
	}
	// is array
	if (name->charAt(0) == '[') {
		return loadArrayClassInternal(name, loader);
	}

	Class* clazz = nullptr;
	if (clazz == nullptr) {
		ClassEntry* classEntry = getClassEntry(name);
		if (classEntry != nullptr && classEntry->loader != nullptr) {
			clazz = classEntry->loader(name, 0);
		}
	}

	if (clazz == nullptr && isLambdaClass(name)) {
		$var(String, holder, getLambdaHoder(name));
		ClassEntry* classEntry = getClassEntry(holder);
		if (classEntry != nullptr && classEntry->loader != nullptr) {
			clazz = classEntry->loader(name, 0);
		}
	}
	if (clazz != nullptr && clazz->classLoader == nullptr) {
		if (loader != nullptr) {
			$set(clazz, classLoader, loader);
		}
	}

	return clazz;
}

Module* Machine::findModule(Class* clazz) {
	$nullcheck(clazz);
	$var(String, className2, clazz->getName());
	if (isLambdaClass(className2)) {
		$assign(className2, getLambdaHoder(className2));
	}
	const char* module = getModuleByClassName(className2);
	if (module != nullptr) {
		$var(String, moudleName2, $str(module));
		return $fcast<Module>(ModuleLayer::boot()->findModule(moudleName2)->orElse(nullptr));
	}

	if (className2->startsWith("jdk.proxy1.") || className2->startsWith("com.sun.proxy.")) {
		$var($ClassArray, interfaces, clazz->getInterfaces(false));
		if (interfaces->length > 0) {
			$var(List, list, $new<ArrayList>());
			for (int32_t i = 0; i < interfaces->length; i++) {
				list->add(interfaces->get(i));
			}
			$var(Proxy$ProxyBuilder, ppb, $new<Proxy$ProxyBuilder>(clazz->classLoader, list));//(Class*)interfaces->get(0)));
			return ppb->module;
		}
	}
	return nullptr;
}

int32_t Machine::arrayDim(String* s) {
	int32_t arrayDimSize = 0;
	for (int32_t i = 0; i < s->length(); i++) {
		char16_t c = s->charAt(i);
		if (c == '[') {
			arrayDimSize++;
			continue;
		}
		break;
	}

	return arrayDimSize;
}

Class* Machine::loadArrayClassInternal(String* name, ClassLoader* loader) {
	if (name->equals(ByteArray::class$->getName())) {
		return ByteArray::class$;
	}
	if (name->equals(ShortArray::class$->getName())) {
		return ShortArray::class$;
	}
	if (name->equals(IntArray::class$->getName())) {
		return IntArray::class$;
	}
	if (name->equals(LongArray::class$->getName())) {
		return LongArray::class$;
	}
	if (name->equals(FloatArray::class$->getName())) {
		return FloatArray::class$;
	}
	if (name->equals(DoubleArray::class$->getName())) {
		return DoubleArray::class$;
	}
	if (name->equals(BooleanArray::class$->getName())) {
		return BooleanArray::class$;
	}
	if (name->equals(CharArray::class$->getName())) {
		return CharArray::class$;
	}
	if (name->equals(ObjectArray::class$->getName())) {
		return ObjectArray::class$;
	}
	int32_t arrayDimSize = arrayDim(name);
	if (arrayDimSize == 0 || arrayDimSize > 255) {
		return nullptr;
	}

	$var(String, arrayComponentType, name->substring(1));
	if (arrayComponentType->charAt(0) == 'L' && arrayComponentType->charAt(arrayComponentType->length() - 1) == ';') {
		$assign(arrayComponentType, arrayComponentType->substring(1, arrayComponentType->length() - 1));
	}
	$var(Class, arrayComponentTypeClazz, loadClassInternal(arrayComponentType, loader));

	// TODO
	if (arrayComponentTypeClazz == nullptr) {
		return nullptr;
	}
	if (arrayComponentTypeClazz->arrayType$ == nullptr) {
		createSubObjectArrayClass(name, arrayComponentTypeClazz);
	}
	return arrayComponentTypeClazz->arrayType$;
}

	} // lang
} // java
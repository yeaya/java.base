#include <jdk/internal/module/ModuleInfoExtender.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/module/ModuleDescriptor$Version.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <jdk/internal/module/ModuleHashes.h>
#include <jdk/internal/module/ModuleInfoExtender$1.h>
#include <jdk/internal/module/ModuleResolution.h>
#include <jdk/internal/org/objectweb/asm/Attribute.h>
#include <jdk/internal/org/objectweb/asm/ClassReader.h>
#include <jdk/internal/org/objectweb/asm/ClassVisitor.h>
#include <jdk/internal/org/objectweb/asm/ClassWriter.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/commons/ModuleHashesAttribute.h>
#include <jdk/internal/org/objectweb/asm/commons/ModuleResolutionAttribute.h>
#include <jdk/internal/org/objectweb/asm/commons/ModuleTargetAttribute.h>
#include <jcpp.h>

#undef ASM7
#undef COMPUTE_FRAMES
#undef COMPUTE_MAXS

using $AttributeArray = $Array<::jdk::internal::org::objectweb::asm$::Attribute>;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleDescriptor$Version = ::java::lang::module::ModuleDescriptor$Version;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $ModuleHashes = ::jdk::internal::module::ModuleHashes;
using $ModuleInfoExtender$1 = ::jdk::internal::module::ModuleInfoExtender$1;
using $ModuleResolution = ::jdk::internal::module::ModuleResolution;
using $ClassReader = ::jdk::internal::org::objectweb::asm$::ClassReader;
using $ClassVisitor = ::jdk::internal::org::objectweb::asm$::ClassVisitor;
using $ClassWriter = ::jdk::internal::org::objectweb::asm$::ClassWriter;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $ModuleHashesAttribute = ::jdk::internal::org::objectweb::asm$::commons::ModuleHashesAttribute;
using $ModuleResolutionAttribute = ::jdk::internal::org::objectweb::asm$::commons::ModuleResolutionAttribute;
using $ModuleTargetAttribute = ::jdk::internal::org::objectweb::asm$::commons::ModuleTargetAttribute;

namespace jdk {
	namespace internal {
		namespace module {

void ModuleInfoExtender::init$($InputStream* in) {
	$set(this, in, in);
}

ModuleInfoExtender* ModuleInfoExtender::packages($Set* packages) {
	$set(this, packages$, $Collections::unmodifiableSet(packages));
	return this;
}

ModuleInfoExtender* ModuleInfoExtender::version($ModuleDescriptor$Version* version) {
	$set(this, version$, version);
	return this;
}

ModuleInfoExtender* ModuleInfoExtender::mainClass($String* mainClass) {
	$set(this, mainClass$, mainClass);
	return this;
}

ModuleInfoExtender* ModuleInfoExtender::targetPlatform($String* targetPlatform) {
	$set(this, targetPlatform$, targetPlatform);
	return this;
}

ModuleInfoExtender* ModuleInfoExtender::hashes($ModuleHashes* hashes) {
	$set(this, hashes$, hashes);
	return this;
}

ModuleInfoExtender* ModuleInfoExtender::moduleResolution($ModuleResolution* mres) {
	$set(this, moduleResolution$, mres);
	return this;
}

void ModuleInfoExtender::write($OutputStream* out) {
	$nc(out)->write($(toByteArray()));
}

$bytes* ModuleInfoExtender::toByteArray() {
	$useLocalObjectStack();
	$var($ClassWriter, cw, $new($ClassWriter, $ClassWriter::COMPUTE_MAXS + $ClassWriter::COMPUTE_FRAMES));
	$var($ClassReader, cr, $new($ClassReader, this->in));
	$var($ClassVisitor, cv, $new($ModuleInfoExtender$1, this, $Opcodes::ASM7, cw));
	$var($List, attrs, $new($ArrayList));
	attrs->add($$new($ModuleTargetAttribute));
	attrs->add($$new($ModuleResolutionAttribute));
	attrs->add($$new($ModuleHashesAttribute));
	cr->accept(cv, $$cast($AttributeArray, attrs->toArray($$new($AttributeArray, 0))), 0);
	if (this->targetPlatform$ != nullptr) {
		cw->visitAttribute($$new($ModuleTargetAttribute, this->targetPlatform$));
	}
	if (this->moduleResolution$ != nullptr) {
		int32_t flags = this->moduleResolution$->value();
		cw->visitAttribute($$new($ModuleResolutionAttribute, flags));
	}
	if (this->hashes$ != nullptr) {
		$var($String, algorithm, this->hashes$->algorithm());
		$var($List, names, $new($ArrayList));
		$var($List, values, $new($ArrayList));
		{
			$var($Iterator, i$, $$nc(this->hashes$->names())->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, name, $cast($String, i$->next()));
				{
					names->add(name);
					values->add($(this->hashes$->hashFor(name)));
				}
			}
		}
		cw->visitAttribute($$new($ModuleHashesAttribute, algorithm, names, values));
	}
	return cw->toByteArray();
}

ModuleInfoExtender* ModuleInfoExtender::newExtender($InputStream* in) {
	return $new(ModuleInfoExtender, in);
}

ModuleInfoExtender::ModuleInfoExtender() {
}

$Class* ModuleInfoExtender::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"in", "Ljava/io/InputStream;", nullptr, $PRIVATE | $FINAL, $field(ModuleInfoExtender, in)},
		{"packages", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE, $field(ModuleInfoExtender, packages$)},
		{"version", "Ljava/lang/module/ModuleDescriptor$Version;", nullptr, $PRIVATE, $field(ModuleInfoExtender, version$)},
		{"mainClass", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ModuleInfoExtender, mainClass$)},
		{"targetPlatform", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ModuleInfoExtender, targetPlatform$)},
		{"hashes", "Ljdk/internal/module/ModuleHashes;", nullptr, $PRIVATE, $field(ModuleInfoExtender, hashes$)},
		{"moduleResolution", "Ljdk/internal/module/ModuleResolution;", nullptr, $PRIVATE, $field(ModuleInfoExtender, moduleResolution$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PRIVATE, $method(ModuleInfoExtender, init$, void, $InputStream*)},
		{"hashes", "(Ljdk/internal/module/ModuleHashes;)Ljdk/internal/module/ModuleInfoExtender;", nullptr, $PUBLIC, $method(ModuleInfoExtender, hashes, ModuleInfoExtender*, $ModuleHashes*)},
		{"mainClass", "(Ljava/lang/String;)Ljdk/internal/module/ModuleInfoExtender;", nullptr, $PUBLIC, $method(ModuleInfoExtender, mainClass, ModuleInfoExtender*, $String*)},
		{"moduleResolution", "(Ljdk/internal/module/ModuleResolution;)Ljdk/internal/module/ModuleInfoExtender;", nullptr, $PUBLIC, $method(ModuleInfoExtender, moduleResolution, ModuleInfoExtender*, $ModuleResolution*)},
		{"newExtender", "(Ljava/io/InputStream;)Ljdk/internal/module/ModuleInfoExtender;", nullptr, $PUBLIC | $STATIC, $staticMethod(ModuleInfoExtender, newExtender, ModuleInfoExtender*, $InputStream*)},
		{"packages", "(Ljava/util/Set;)Ljdk/internal/module/ModuleInfoExtender;", "(Ljava/util/Set<Ljava/lang/String;>;)Ljdk/internal/module/ModuleInfoExtender;", $PUBLIC, $method(ModuleInfoExtender, packages, ModuleInfoExtender*, $Set*)},
		{"targetPlatform", "(Ljava/lang/String;)Ljdk/internal/module/ModuleInfoExtender;", nullptr, $PUBLIC, $method(ModuleInfoExtender, targetPlatform, ModuleInfoExtender*, $String*)},
		{"toByteArray", "()[B", nullptr, $PUBLIC, $method(ModuleInfoExtender, toByteArray, $bytes*), "java.io.IOException"},
		{"version", "(Ljava/lang/module/ModuleDescriptor$Version;)Ljdk/internal/module/ModuleInfoExtender;", nullptr, $PUBLIC, $method(ModuleInfoExtender, version, ModuleInfoExtender*, $ModuleDescriptor$Version*)},
		{"write", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $method(ModuleInfoExtender, write, void, $OutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.module.ModuleInfoExtender$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.module.ModuleInfoExtender",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"jdk.internal.module.ModuleInfoExtender$1,jdk.internal.module.ModuleInfoExtender$1$1"
	};
	$loadClass(ModuleInfoExtender, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleInfoExtender);
	});
	return class$;
}

$Class* ModuleInfoExtender::class$ = nullptr;

		} // module
	} // internal
} // jdk
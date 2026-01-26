#include <java/security/SecureClassLoader.h>

#include <java/lang/ClassLoader.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/CodeSource.h>
#include <java/security/PermissionCollection.h>
#include <java/security/Permissions.h>
#include <java/security/ProtectionDomain.h>
#include <java/security/SecureClassLoader$1.h>
#include <java/security/SecureClassLoader$CodeSourceKey.h>
#include <java/util/AbstractMap.h>
#include <java/util/Map.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CodeSource = ::java::security::CodeSource;
using $PermissionCollection = ::java::security::PermissionCollection;
using $Permissions = ::java::security::Permissions;
using $ProtectionDomain = ::java::security::ProtectionDomain;
using $SecureClassLoader$1 = ::java::security::SecureClassLoader$1;
using $SecureClassLoader$CodeSourceKey = ::java::security::SecureClassLoader$CodeSourceKey;
using $AbstractMap = ::java::util::AbstractMap;
using $Map = ::java::util::Map;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $Function = ::java::util::function::Function;

namespace java {
	namespace security {

$FieldInfo _SecureClassLoader_FieldInfo_[] = {
	{"pdcache", "Ljava/util/Map;", "Ljava/util/Map<Ljava/security/SecureClassLoader$CodeSourceKey;Ljava/security/ProtectionDomain;>;", $PRIVATE | $FINAL, $field(SecureClassLoader, pdcache)},
	{}
};

$MethodInfo _SecureClassLoader_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/ClassLoader;)V", nullptr, $PROTECTED, $method(SecureClassLoader, init$, void, $ClassLoader*)},
	{"<init>", "()V", nullptr, $PROTECTED, $method(SecureClassLoader, init$, void)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/ClassLoader;)V", nullptr, $PROTECTED, $method(SecureClassLoader, init$, void, $String*, $ClassLoader*)},
	{"defineClass", "(Ljava/lang/String;[BIILjava/security/CodeSource;)Ljava/lang/Class;", "(Ljava/lang/String;[BIILjava/security/CodeSource;)Ljava/lang/Class<*>;", $PROTECTED | $FINAL, $method(SecureClassLoader, defineClass, $Class*, $String*, $bytes*, int32_t, int32_t, $CodeSource*)},
	{"defineClass", "(Ljava/lang/String;Ljava/nio/ByteBuffer;Ljava/security/CodeSource;)Ljava/lang/Class;", "(Ljava/lang/String;Ljava/nio/ByteBuffer;Ljava/security/CodeSource;)Ljava/lang/Class<*>;", $PROTECTED | $FINAL, $method(SecureClassLoader, defineClass, $Class*, $String*, $ByteBuffer*, $CodeSource*)},
	{"getPermissions", "(Ljava/security/CodeSource;)Ljava/security/PermissionCollection;", nullptr, $PROTECTED, $virtualMethod(SecureClassLoader, getPermissions, $PermissionCollection*, $CodeSource*)},
	{"getProtectionDomain", "(Ljava/security/CodeSource;)Ljava/security/ProtectionDomain;", nullptr, $PRIVATE, $method(SecureClassLoader, getProtectionDomain, $ProtectionDomain*, $CodeSource*)},
	{"resetArchivedStates", "()V", nullptr, $PRIVATE, $method(SecureClassLoader, resetArchivedStates, void)},
	{}
};

$InnerClassInfo _SecureClassLoader_InnerClassesInfo_[] = {
	{"java.security.SecureClassLoader$CodeSourceKey", "java.security.SecureClassLoader", "CodeSourceKey", $PRIVATE | $STATIC},
	{"java.security.SecureClassLoader$DebugHolder", "java.security.SecureClassLoader", "DebugHolder", $PRIVATE | $STATIC},
	{"java.security.SecureClassLoader$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SecureClassLoader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.SecureClassLoader",
	"java.lang.ClassLoader",
	nullptr,
	_SecureClassLoader_FieldInfo_,
	_SecureClassLoader_MethodInfo_,
	nullptr,
	nullptr,
	_SecureClassLoader_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.security.SecureClassLoader$CodeSourceKey,java.security.SecureClassLoader$DebugHolder,java.security.SecureClassLoader$1"
};

$Object* allocate$SecureClassLoader($Class* clazz) {
	return $of($alloc(SecureClassLoader));
}

void SecureClassLoader::init$($ClassLoader* parent) {
	$ClassLoader::init$(parent);
	$set(this, pdcache, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap, 11))));
}

void SecureClassLoader::init$() {
	$ClassLoader::init$();
	$set(this, pdcache, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap, 11))));
}

void SecureClassLoader::init$($String* name, $ClassLoader* parent) {
	$ClassLoader::init$(name, parent);
	$set(this, pdcache, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap, 11))));
}

$Class* SecureClassLoader::defineClass($String* name, $bytes* b, int32_t off, int32_t len, $CodeSource* cs) {
	return defineClass(name, b, off, len, $(getProtectionDomain(cs)));
}

$Class* SecureClassLoader::defineClass($String* name, $ByteBuffer* b, $CodeSource* cs) {
	return defineClass(name, b, $(getProtectionDomain(cs)));
}

$PermissionCollection* SecureClassLoader::getPermissions($CodeSource* codesource) {
	return $new($Permissions);
}

$ProtectionDomain* SecureClassLoader::getProtectionDomain($CodeSource* cs) {
	$useLocalCurrentObjectStackCache();
	if (cs == nullptr) {
		return nullptr;
	}
	$var($SecureClassLoader$CodeSourceKey, key, $new($SecureClassLoader$CodeSourceKey, cs));
	return $cast($ProtectionDomain, $nc(this->pdcache)->computeIfAbsent(key, $$new($SecureClassLoader$1, this, cs)));
}

void SecureClassLoader::resetArchivedStates() {
	$nc(this->pdcache)->clear();
}

void clinit$SecureClassLoader($Class* class$) {
	$beforeCallerSensitive();
	{
		$ClassLoader::registerAsParallelCapable();
	}
}

SecureClassLoader::SecureClassLoader() {
}

$Class* SecureClassLoader::load$($String* name, bool initialize) {
	$loadClass(SecureClassLoader, name, initialize, &_SecureClassLoader_ClassInfo_, clinit$SecureClassLoader, allocate$SecureClassLoader);
	return class$;
}

$Class* SecureClassLoader::class$ = nullptr;

	} // security
} // java
#include <java/lang/invoke/MethodHandles$Lookup$ClassDefiner.h>

#include <java/lang/AssertionError.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/invoke/MethodHandles$Lookup$ClassFile.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/security/ProtectionDomain.h>
#include <jdk/internal/access/JavaLangAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodHandles$Lookup$ClassFile = ::java::lang::invoke::MethodHandles$Lookup$ClassFile;
using $ProtectionDomain = ::java::security::ProtectionDomain;
using $JavaLangAccess = ::jdk::internal::access::JavaLangAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _MethodHandles$Lookup$ClassDefiner_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MethodHandles$Lookup$ClassDefiner, $assertionsDisabled)},
	{"lookup", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PRIVATE | $FINAL, $field(MethodHandles$Lookup$ClassDefiner, lookup)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MethodHandles$Lookup$ClassDefiner, name)},
	{"bytes", "[B", nullptr, $PRIVATE | $FINAL, $field(MethodHandles$Lookup$ClassDefiner, bytes)},
	{"classFlags", "I", nullptr, $PRIVATE | $FINAL, $field(MethodHandles$Lookup$ClassDefiner, classFlags)},
	{}
};

$MethodInfo _MethodHandles$Lookup$ClassDefiner_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MethodHandles$Lookup$ClassFile;I)V", nullptr, $PRIVATE, $method(MethodHandles$Lookup$ClassDefiner, init$, void, $MethodHandles$Lookup*, $MethodHandles$Lookup$ClassFile*, int32_t)},
	{"className", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(MethodHandles$Lookup$ClassDefiner, className, $String*)},
	{"defineClass", "(Z)Ljava/lang/Class;", "(Z)Ljava/lang/Class<*>;", 0, $virtualMethod(MethodHandles$Lookup$ClassDefiner, defineClass, $Class*, bool)},
	{"defineClass", "(ZLjava/lang/Object;)Ljava/lang/Class;", "(ZLjava/lang/Object;)Ljava/lang/Class<*>;", 0, $virtualMethod(MethodHandles$Lookup$ClassDefiner, defineClass, $Class*, bool, Object$*)},
	{"defineClassAsLookup", "(Z)Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, 0, $virtualMethod(MethodHandles$Lookup$ClassDefiner, defineClassAsLookup, $MethodHandles$Lookup*, bool)},
	{"defineClassAsLookup", "(ZLjava/lang/Object;)Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, 0, $virtualMethod(MethodHandles$Lookup$ClassDefiner, defineClassAsLookup, $MethodHandles$Lookup*, bool, Object$*)},
	{"isNestmate", "()Z", nullptr, $PRIVATE, $method(MethodHandles$Lookup$ClassDefiner, isNestmate, bool)},
	{}
};

$InnerClassInfo _MethodHandles$Lookup$ClassDefiner_InnerClassesInfo_[] = {
	{"java.lang.invoke.MethodHandles$Lookup", "java.lang.invoke.MethodHandles", "Lookup", $PUBLIC | $STATIC | $FINAL},
	{"java.lang.invoke.MethodHandles$Lookup$ClassDefiner", "java.lang.invoke.MethodHandles$Lookup", "ClassDefiner", $STATIC},
	{}
};

$ClassInfo _MethodHandles$Lookup$ClassDefiner_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.MethodHandles$Lookup$ClassDefiner",
	"java.lang.Object",
	nullptr,
	_MethodHandles$Lookup$ClassDefiner_FieldInfo_,
	_MethodHandles$Lookup$ClassDefiner_MethodInfo_,
	nullptr,
	nullptr,
	_MethodHandles$Lookup$ClassDefiner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.MethodHandles"
};

$Object* allocate$MethodHandles$Lookup$ClassDefiner($Class* clazz) {
	return $of($alloc(MethodHandles$Lookup$ClassDefiner));
}

bool MethodHandles$Lookup$ClassDefiner::$assertionsDisabled = false;

void MethodHandles$Lookup$ClassDefiner::init$($MethodHandles$Lookup* lookup, $MethodHandles$Lookup$ClassFile* cf, int32_t flags) {
	if (!MethodHandles$Lookup$ClassDefiner::$assertionsDisabled && !(((int32_t)(flags & (uint32_t)2)) != 0 || ((int32_t)(flags & (uint32_t)4)) == 4)) {
		$throwNew($AssertionError);
	}
	$set(this, lookup, lookup);
	$set(this, bytes, $nc(cf)->bytes);
	$set(this, name, cf->name);
	this->classFlags = flags;
}

$String* MethodHandles$Lookup$ClassDefiner::className() {
	return this->name;
}

$Class* MethodHandles$Lookup$ClassDefiner::defineClass(bool initialize) {
	return defineClass(initialize, nullptr);
}

$MethodHandles$Lookup* MethodHandles$Lookup$ClassDefiner::defineClassAsLookup(bool initialize) {
	$Class* c = defineClass(initialize, nullptr);
	return $new($MethodHandles$Lookup, c, nullptr, 95);
}

$Class* MethodHandles$Lookup$ClassDefiner::defineClass(bool initialize, Object$* classData) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$Class* lookupClass = $nc(this->lookup)->lookupClass();
	$var($ClassLoader, loader, $nc(lookupClass)->getClassLoader());
	$var($ProtectionDomain, pd, (loader != nullptr) ? $nc(this->lookup)->lookupClassProtectionDomain() : ($ProtectionDomain*)nullptr);
	$Class* c = $nc($($SharedSecrets::getJavaLangAccess()))->defineClass(loader, lookupClass, this->name, this->bytes, pd, initialize, this->classFlags, classData);
	bool var$0 = !MethodHandles$Lookup$ClassDefiner::$assertionsDisabled;
	if (var$0) {
		bool var$1 = !isNestmate();
		if (!var$1) {
			var$1 = $nc(c)->getNestHost() == lookupClass->getNestHost();
		}
		var$0 = !var$1;
	}
	if (var$0) {
		$throwNew($AssertionError);
	}
	return c;
}

$MethodHandles$Lookup* MethodHandles$Lookup$ClassDefiner::defineClassAsLookup(bool initialize, Object$* classData) {
	$Class* c = defineClass(initialize, classData);
	return $new($MethodHandles$Lookup, c, nullptr, 95);
}

bool MethodHandles$Lookup$ClassDefiner::isNestmate() {
	return ((int32_t)(this->classFlags & (uint32_t)1)) != 0;
}

void clinit$MethodHandles$Lookup$ClassDefiner($Class* class$) {
	$load($MethodHandles);
	MethodHandles$Lookup$ClassDefiner::$assertionsDisabled = !$MethodHandles::class$->desiredAssertionStatus();
}

MethodHandles$Lookup$ClassDefiner::MethodHandles$Lookup$ClassDefiner() {
}

$Class* MethodHandles$Lookup$ClassDefiner::load$($String* name, bool initialize) {
	$loadClass(MethodHandles$Lookup$ClassDefiner, name, initialize, &_MethodHandles$Lookup$ClassDefiner_ClassInfo_, clinit$MethodHandles$Lookup$ClassDefiner, allocate$MethodHandles$Lookup$ClassDefiner);
	return class$;
}

$Class* MethodHandles$Lookup$ClassDefiner::class$ = nullptr;

		} // invoke
	} // lang
} // java
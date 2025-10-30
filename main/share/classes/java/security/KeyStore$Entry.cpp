#include <java/security/KeyStore$Entry.h>

#include <java/security/KeyStore$Entry$Attribute.h>
#include <java/security/KeyStore.h>
#include <java/util/Collections.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeyStore = ::java::security::KeyStore;
using $KeyStore$Entry$Attribute = ::java::security::KeyStore$Entry$Attribute;
using $Collections = ::java::util::Collections;
using $Set = ::java::util::Set;

namespace java {
	namespace security {

$MethodInfo _KeyStore$Entry_MethodInfo_[] = {
	{"getAttributes", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/security/KeyStore$Entry$Attribute;>;", $PUBLIC},
	{}
};

$InnerClassInfo _KeyStore$Entry_InnerClassesInfo_[] = {
	{"java.security.KeyStore$Entry", "java.security.KeyStore", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.security.KeyStore$Entry$Attribute", "java.security.KeyStore$Entry", "Attribute", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _KeyStore$Entry_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.KeyStore$Entry",
	nullptr,
	nullptr,
	nullptr,
	_KeyStore$Entry_MethodInfo_,
	nullptr,
	nullptr,
	_KeyStore$Entry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.KeyStore"
};

$Object* allocate$KeyStore$Entry($Class* clazz) {
	return $of($alloc(KeyStore$Entry));
}

$Set* KeyStore$Entry::getAttributes() {
	return $Collections::emptySet();
}

$Class* KeyStore$Entry::load$($String* name, bool initialize) {
	$loadClass(KeyStore$Entry, name, initialize, &_KeyStore$Entry_ClassInfo_, allocate$KeyStore$Entry);
	return class$;
}

$Class* KeyStore$Entry::class$ = nullptr;

	} // security
} // java
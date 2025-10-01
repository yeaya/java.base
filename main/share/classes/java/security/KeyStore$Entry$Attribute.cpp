#include <java/security/KeyStore$Entry$Attribute.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/KeyStore$Entry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeyStore$Entry = ::java::security::KeyStore$Entry;

namespace java {
	namespace security {

$MethodInfo _KeyStore$Entry$Attribute_MethodInfo_[] = {
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _KeyStore$Entry$Attribute_InnerClassesInfo_[] = {
	{"java.security.KeyStore$Entry", "java.security.KeyStore", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.security.KeyStore$Entry$Attribute", "java.security.KeyStore$Entry", "Attribute", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _KeyStore$Entry$Attribute_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.KeyStore$Entry$Attribute",
	nullptr,
	nullptr,
	nullptr,
	_KeyStore$Entry$Attribute_MethodInfo_,
	nullptr,
	nullptr,
	_KeyStore$Entry$Attribute_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.KeyStore"
};

$Object* allocate$KeyStore$Entry$Attribute($Class* clazz) {
	return $of($alloc(KeyStore$Entry$Attribute));
}

$Class* KeyStore$Entry$Attribute::load$($String* name, bool initialize) {
	$loadClass(KeyStore$Entry$Attribute, name, initialize, &_KeyStore$Entry$Attribute_ClassInfo_, allocate$KeyStore$Entry$Attribute);
	return class$;
}

$Class* KeyStore$Entry$Attribute::class$ = nullptr;

	} // security
} // java
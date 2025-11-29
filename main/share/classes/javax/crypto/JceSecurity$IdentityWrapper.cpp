#include <javax/crypto/JceSecurity$IdentityWrapper.h>

#include <java/security/Provider.h>
#include <javax/crypto/JceSecurity.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Provider = ::java::security::Provider;

namespace javax {
	namespace crypto {

$FieldInfo _JceSecurity$IdentityWrapper_FieldInfo_[] = {
	{"obj", "Ljava/security/Provider;", nullptr, $FINAL, $field(JceSecurity$IdentityWrapper, obj)},
	{}
};

$MethodInfo _JceSecurity$IdentityWrapper_MethodInfo_[] = {
	{"<init>", "(Ljava/security/Provider;)V", nullptr, 0, $method(static_cast<void(JceSecurity$IdentityWrapper::*)($Provider*)>(&JceSecurity$IdentityWrapper::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JceSecurity$IdentityWrapper_InnerClassesInfo_[] = {
	{"javax.crypto.JceSecurity$IdentityWrapper", "javax.crypto.JceSecurity", "IdentityWrapper", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _JceSecurity$IdentityWrapper_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.crypto.JceSecurity$IdentityWrapper",
	"java.lang.Object",
	nullptr,
	_JceSecurity$IdentityWrapper_FieldInfo_,
	_JceSecurity$IdentityWrapper_MethodInfo_,
	nullptr,
	nullptr,
	_JceSecurity$IdentityWrapper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.crypto.JceSecurity"
};

$Object* allocate$JceSecurity$IdentityWrapper($Class* clazz) {
	return $of($alloc(JceSecurity$IdentityWrapper));
}

void JceSecurity$IdentityWrapper::init$($Provider* obj) {
	$set(this, obj, obj);
}

bool JceSecurity$IdentityWrapper::equals(Object$* o) {
	if ($equals(this, o)) {
		return true;
	}
	if (!($instanceOf(JceSecurity$IdentityWrapper, o))) {
		return false;
	}
	return this->obj == $nc(($cast(JceSecurity$IdentityWrapper, o)))->obj;
}

int32_t JceSecurity$IdentityWrapper::hashCode() {
	return $System::identityHashCode(this->obj);
}

JceSecurity$IdentityWrapper::JceSecurity$IdentityWrapper() {
}

$Class* JceSecurity$IdentityWrapper::load$($String* name, bool initialize) {
	$loadClass(JceSecurity$IdentityWrapper, name, initialize, &_JceSecurity$IdentityWrapper_ClassInfo_, allocate$JceSecurity$IdentityWrapper);
	return class$;
}

$Class* JceSecurity$IdentityWrapper::class$ = nullptr;

	} // crypto
} // javax
#include <sun/security/x509/X400Address.h>

#include <java/lang/UnsupportedOperationException.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/x509/GeneralNameInterface.h>
#include <jcpp.h>

#undef NAME_DIFF_TYPE
#undef NAME_X400

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $GeneralNameInterface = ::sun::security::x509::GeneralNameInterface;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _X400Address_FieldInfo_[] = {
	{"nameValue", "[B", nullptr, 0, $field(X400Address, nameValue)},
	{}
};

$MethodInfo _X400Address_MethodInfo_[] = {
	{"<init>", "([B)V", nullptr, $PUBLIC, $method(X400Address, init$, void, $bytes*)},
	{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, $method(X400Address, init$, void, $DerValue*), "java.io.IOException"},
	{"constrains", "(Lsun/security/x509/GeneralNameInterface;)I", nullptr, $PUBLIC, $virtualMethod(X400Address, constrains, int32_t, $GeneralNameInterface*), "java.lang.UnsupportedOperationException"},
	{"encode", "(Lsun/security/util/DerOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(X400Address, encode, void, $DerOutputStream*), "java.io.IOException"},
	{"getType", "()I", nullptr, $PUBLIC, $virtualMethod(X400Address, getType, int32_t)},
	{"subtreeDepth", "()I", nullptr, $PUBLIC, $virtualMethod(X400Address, subtreeDepth, int32_t), "java.lang.UnsupportedOperationException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(X400Address, toString, $String*)},
	{}
};

$ClassInfo _X400Address_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.X400Address",
	"java.lang.Object",
	"sun.security.x509.GeneralNameInterface",
	_X400Address_FieldInfo_,
	_X400Address_MethodInfo_
};

$Object* allocate$X400Address($Class* clazz) {
	return $of($alloc(X400Address));
}

void X400Address::init$($bytes* value) {
	$set(this, nameValue, nullptr);
	$set(this, nameValue, value);
}

void X400Address::init$($DerValue* derValue) {
	$set(this, nameValue, nullptr);
	$set(this, nameValue, $nc(derValue)->toByteArray());
}

int32_t X400Address::getType() {
	return ($GeneralNameInterface::NAME_X400);
}

void X400Address::encode($DerOutputStream* out) {
	$var($DerValue, derValue, $new($DerValue, this->nameValue));
	$nc(out)->putDerValue(derValue);
}

$String* X400Address::toString() {
	return ("X400Address: <DER-encoded value>"_s);
}

int32_t X400Address::constrains($GeneralNameInterface* inputName) {
	int32_t constraintType = 0;
	if (inputName == nullptr) {
		constraintType = $GeneralNameInterface::NAME_DIFF_TYPE;
	} else if ($nc(inputName)->getType() != $GeneralNameInterface::NAME_X400) {
		constraintType = $GeneralNameInterface::NAME_DIFF_TYPE;
	} else {
		$throwNew($UnsupportedOperationException, "Narrowing, widening, and match are not supported for X400Address."_s);
	}
	return constraintType;
}

int32_t X400Address::subtreeDepth() {
	$throwNew($UnsupportedOperationException, "subtreeDepth not supported for X400Address"_s);
	$shouldNotReachHere();
}

X400Address::X400Address() {
}

$Class* X400Address::load$($String* name, bool initialize) {
	$loadClass(X400Address, name, initialize, &_X400Address_ClassInfo_, allocate$X400Address);
	return class$;
}

$Class* X400Address::class$ = nullptr;

		} // x509
	} // security
} // sun
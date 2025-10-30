#include <sun/security/x509/UniqueIdentity.h>

#include <java/io/OutputStream.h>
#include <sun/security/util/BitArray.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <jcpp.h>

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BitArray = ::sun::security::util::BitArray;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _UniqueIdentity_FieldInfo_[] = {
	{"id", "Lsun/security/util/BitArray;", nullptr, $PRIVATE, $field(UniqueIdentity, id)},
	{}
};

$MethodInfo _UniqueIdentity_MethodInfo_[] = {
	{"<init>", "(Lsun/security/util/BitArray;)V", nullptr, $PUBLIC, $method(static_cast<void(UniqueIdentity::*)($BitArray*)>(&UniqueIdentity::init$))},
	{"<init>", "([B)V", nullptr, $PUBLIC, $method(static_cast<void(UniqueIdentity::*)($bytes*)>(&UniqueIdentity::init$))},
	{"<init>", "(Lsun/security/util/DerInputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(UniqueIdentity::*)($DerInputStream*)>(&UniqueIdentity::init$)), "java.io.IOException"},
	{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, $method(static_cast<void(UniqueIdentity::*)($DerValue*)>(&UniqueIdentity::init$)), "java.io.IOException"},
	{"encode", "(Lsun/security/util/DerOutputStream;B)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getId", "()[Z", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _UniqueIdentity_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.UniqueIdentity",
	"java.lang.Object",
	nullptr,
	_UniqueIdentity_FieldInfo_,
	_UniqueIdentity_MethodInfo_
};

$Object* allocate$UniqueIdentity($Class* clazz) {
	return $of($alloc(UniqueIdentity));
}

void UniqueIdentity::init$($BitArray* id) {
	$set(this, id, id);
}

void UniqueIdentity::init$($bytes* id) {
	$set(this, id, $new($BitArray, $nc(id)->length * 8, id));
}

void UniqueIdentity::init$($DerInputStream* in) {
	$var($DerValue, derVal, $nc(in)->getDerValue());
	$set(this, id, $nc(derVal)->getUnalignedBitString(true));
}

void UniqueIdentity::init$($DerValue* derVal) {
	$set(this, id, $nc(derVal)->getUnalignedBitString(true));
}

$String* UniqueIdentity::toString() {
	return ($str({"UniqueIdentity:"_s, $($nc(this->id)->toString()), "\n"_s}));
}

void UniqueIdentity::encode($DerOutputStream* out, int8_t tag) {
	$var($bytes, bytes, $nc(this->id)->toByteArray());
	int32_t excessBits = $nc(bytes)->length * 8 - $nc(this->id)->length();
	$nc(out)->write((int32_t)tag);
	out->putLength(bytes->length + 1);
	out->write(excessBits);
	out->write(bytes);
}

$booleans* UniqueIdentity::getId() {
	if (this->id == nullptr) {
		return nullptr;
	}
	return $nc(this->id)->toBooleanArray();
}

UniqueIdentity::UniqueIdentity() {
}

$Class* UniqueIdentity::load$($String* name, bool initialize) {
	$loadClass(UniqueIdentity, name, initialize, &_UniqueIdentity_ClassInfo_, allocate$UniqueIdentity);
	return class$;
}

$Class* UniqueIdentity::class$ = nullptr;

		} // x509
	} // security
} // sun
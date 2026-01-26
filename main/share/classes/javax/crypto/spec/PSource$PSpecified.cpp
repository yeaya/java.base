#include <javax/crypto/spec/PSource$PSpecified.h>

#include <javax/crypto/spec/PSource.h>
#include <jcpp.h>

#undef DEFAULT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PSource = ::javax::crypto::spec::PSource;

namespace javax {
	namespace crypto {
		namespace spec {

$FieldInfo _PSource$PSpecified_FieldInfo_[] = {
	{"p", "[B", nullptr, $PRIVATE, $field(PSource$PSpecified, p)},
	{"DEFAULT", "Ljavax/crypto/spec/PSource$PSpecified;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PSource$PSpecified, DEFAULT)},
	{}
};

$MethodInfo _PSource$PSpecified_MethodInfo_[] = {
	{"<init>", "([B)V", nullptr, $PUBLIC, $method(PSource$PSpecified, init$, void, $bytes*)},
	{"getValue", "()[B", nullptr, $PUBLIC, $method(PSource$PSpecified, getValue, $bytes*)},
	{}
};

$InnerClassInfo _PSource$PSpecified_InnerClassesInfo_[] = {
	{"javax.crypto.spec.PSource$PSpecified", "javax.crypto.spec.PSource", "PSpecified", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _PSource$PSpecified_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.crypto.spec.PSource$PSpecified",
	"javax.crypto.spec.PSource",
	nullptr,
	_PSource$PSpecified_FieldInfo_,
	_PSource$PSpecified_MethodInfo_,
	nullptr,
	nullptr,
	_PSource$PSpecified_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.crypto.spec.PSource"
};

$Object* allocate$PSource$PSpecified($Class* clazz) {
	return $of($alloc(PSource$PSpecified));
}

PSource$PSpecified* PSource$PSpecified::DEFAULT = nullptr;

void PSource$PSpecified::init$($bytes* p) {
	$PSource::init$("PSpecified"_s);
	$set(this, p, $new($bytes, 0));
	$set(this, p, $cast($bytes, $nc(p)->clone()));
}

$bytes* PSource$PSpecified::getValue() {
	return ($nc(this->p)->length == 0 ? this->p : $cast($bytes, $nc(this->p)->clone()));
}

void clinit$PSource$PSpecified($Class* class$) {
	$assignStatic(PSource$PSpecified::DEFAULT, $new(PSource$PSpecified, $$new($bytes, 0)));
}

PSource$PSpecified::PSource$PSpecified() {
}

$Class* PSource$PSpecified::load$($String* name, bool initialize) {
	$loadClass(PSource$PSpecified, name, initialize, &_PSource$PSpecified_ClassInfo_, clinit$PSource$PSpecified, allocate$PSource$PSpecified);
	return class$;
}

$Class* PSource$PSpecified::class$ = nullptr;

		} // spec
	} // crypto
} // javax
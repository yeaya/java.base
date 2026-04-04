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

PSource$PSpecified* PSource$PSpecified::DEFAULT = nullptr;

void PSource$PSpecified::init$($bytes* p) {
	$PSource::init$("PSpecified"_s);
	$set(this, p, $new($bytes, 0));
	$set(this, p, $cast($bytes, $nc(p)->clone()));
}

$bytes* PSource$PSpecified::getValue() {
	return ($nc(this->p)->length == 0 ? this->p : $cast($bytes, this->p->clone()));
}

void PSource$PSpecified::clinit$($Class* clazz) {
	$assignStatic(PSource$PSpecified::DEFAULT, $new(PSource$PSpecified, $$new($bytes, 0)));
}

PSource$PSpecified::PSource$PSpecified() {
}

$Class* PSource$PSpecified::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"p", "[B", nullptr, $PRIVATE, $field(PSource$PSpecified, p)},
		{"DEFAULT", "Ljavax/crypto/spec/PSource$PSpecified;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PSource$PSpecified, DEFAULT)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([B)V", nullptr, $PUBLIC, $method(PSource$PSpecified, init$, void, $bytes*)},
		{"getValue", "()[B", nullptr, $PUBLIC, $method(PSource$PSpecified, getValue, $bytes*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.crypto.spec.PSource$PSpecified", "javax.crypto.spec.PSource", "PSpecified", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.crypto.spec.PSource$PSpecified",
		"javax.crypto.spec.PSource",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.crypto.spec.PSource"
	};
	$loadClass(PSource$PSpecified, name, initialize, &classInfo$$, PSource$PSpecified::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PSource$PSpecified);
	});
	return class$;
}

$Class* PSource$PSpecified::class$ = nullptr;

		} // spec
	} // crypto
} // javax
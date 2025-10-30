#include <jdk/internal/util/xml/impl/Pair.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace util {
			namespace xml {
				namespace impl {

$FieldInfo _Pair_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(Pair, name)},
	{"value", "Ljava/lang/String;", nullptr, $PUBLIC, $field(Pair, value)},
	{"num", "I", nullptr, $PUBLIC, $field(Pair, num)},
	{"chars", "[C", nullptr, $PUBLIC, $field(Pair, chars)},
	{"id", "I", nullptr, $PUBLIC, $field(Pair, id)},
	{"list", "Ljdk/internal/util/xml/impl/Pair;", nullptr, $PUBLIC, $field(Pair, list)},
	{"next", "Ljdk/internal/util/xml/impl/Pair;", nullptr, $PUBLIC, $field(Pair, next)},
	{}
};

$MethodInfo _Pair_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Pair::*)()>(&Pair::init$))},
	{"eqname", "([C)Z", nullptr, $PUBLIC},
	{"eqpref", "([C)Z", nullptr, $PUBLIC},
	{"local", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"pref", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"qname", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Pair_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.util.xml.impl.Pair",
	"java.lang.Object",
	nullptr,
	_Pair_FieldInfo_,
	_Pair_MethodInfo_
};

$Object* allocate$Pair($Class* clazz) {
	return $of($alloc(Pair));
}

void Pair::init$() {
}

$String* Pair::qname() {
	return $new($String, this->chars, 1, $nc(this->chars)->length - 1);
}

$String* Pair::local() {
	if ($nc(this->chars)->get(0) != 0) {
		return $new($String, this->chars, $nc(this->chars)->get(0) + 1, $nc(this->chars)->length - $nc(this->chars)->get(0) - 1);
	}
	return $new($String, this->chars, 1, $nc(this->chars)->length - 1);
}

$String* Pair::pref() {
	if ($nc(this->chars)->get(0) != 0) {
		return $new($String, this->chars, 1, $nc(this->chars)->get(0) - 1);
	}
	return ""_s;
}

bool Pair::eqpref($chars* qname) {
	if ($nc(this->chars)->get(0) == $nc(qname)->get(0)) {
		char16_t len = $nc(this->chars)->get(0);
		for (char16_t i = (char16_t)1; i < len; i += 1) {
			if ($nc(this->chars)->get(i) != qname->get(i)) {
				return false;
			}
		}
		return true;
	}
	return false;
}

bool Pair::eqname($chars* qname) {
	char16_t len = (char16_t)$nc(this->chars)->length;
	if (len == $nc(qname)->length) {
		for (char16_t i = (char16_t)0; i < len; i += 1) {
			if ($nc(this->chars)->get(i) != qname->get(i)) {
				return false;
			}
		}
		return true;
	}
	return false;
}

Pair::Pair() {
}

$Class* Pair::load$($String* name, bool initialize) {
	$loadClass(Pair, name, initialize, &_Pair_ClassInfo_, allocate$Pair);
	return class$;
}

$Class* Pair::class$ = nullptr;

				} // impl
			} // xml
		} // util
	} // internal
} // jdk
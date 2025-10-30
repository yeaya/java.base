#include <java/text/EntryPair.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace text {

$FieldInfo _EntryPair_FieldInfo_[] = {
	{"entryName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(EntryPair, entryName)},
	{"value", "I", nullptr, $PUBLIC, $field(EntryPair, value)},
	{"fwd", "Z", nullptr, $PUBLIC, $field(EntryPair, fwd)},
	{}
};

$MethodInfo _EntryPair_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(EntryPair::*)($String*,int32_t)>(&EntryPair::init$))},
	{"<init>", "(Ljava/lang/String;IZ)V", nullptr, $PUBLIC, $method(static_cast<void(EntryPair::*)($String*,int32_t,bool)>(&EntryPair::init$))},
	{}
};

$ClassInfo _EntryPair_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.text.EntryPair",
	"java.lang.Object",
	nullptr,
	_EntryPair_FieldInfo_,
	_EntryPair_MethodInfo_
};

$Object* allocate$EntryPair($Class* clazz) {
	return $of($alloc(EntryPair));
}

void EntryPair::init$($String* name, int32_t value) {
	EntryPair::init$(name, value, true);
}

void EntryPair::init$($String* name, int32_t value, bool fwd) {
	$set(this, entryName, name);
	this->value = value;
	this->fwd = fwd;
}

EntryPair::EntryPair() {
}

$Class* EntryPair::load$($String* name, bool initialize) {
	$loadClass(EntryPair, name, initialize, &_EntryPair_ClassInfo_, allocate$EntryPair);
	return class$;
}

$Class* EntryPair::class$ = nullptr;

	} // text
} // java
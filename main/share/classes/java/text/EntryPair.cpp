#include <java/text/EntryPair.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace text {

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
	$FieldInfo fieldInfos$$[] = {
		{"entryName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(EntryPair, entryName)},
		{"value", "I", nullptr, $PUBLIC, $field(EntryPair, value)},
		{"fwd", "Z", nullptr, $PUBLIC, $field(EntryPair, fwd)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(EntryPair, init$, void, $String*, int32_t)},
		{"<init>", "(Ljava/lang/String;IZ)V", nullptr, $PUBLIC, $method(EntryPair, init$, void, $String*, int32_t, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.text.EntryPair",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(EntryPair, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EntryPair);
	});
	return class$;
}

$Class* EntryPair::class$ = nullptr;

	} // text
} // java
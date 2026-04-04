#include <DummyFieldHolder.h>
#include <jcpp.h>

using $LongArray = $Array<::java::lang::Long>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

$Integer* DummyFieldHolder::staticField = nullptr;

void DummyFieldHolder::init$(int8_t unused1, $LongArray* unused2) {
}

DummyFieldHolder::DummyFieldHolder() {
}

$Class* DummyFieldHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"staticField", "Ljava/lang/Integer;", nullptr, $PUBLIC | $STATIC, $staticField(DummyFieldHolder, staticField)},
		{"instanceField", "Ljava/lang/String;", nullptr, $PUBLIC, $field(DummyFieldHolder, instanceField)},
		{"instanceByteField", "B", nullptr, $PUBLIC, $field(DummyFieldHolder, instanceByteField)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(B[Ljava/lang/Long;)V", nullptr, $PUBLIC | $TRANSIENT, $method(DummyFieldHolder, init$, void, int8_t, $LongArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"DummyFieldHolder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DummyFieldHolder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DummyFieldHolder);
	});
	return class$;
}

$Class* DummyFieldHolder::class$ = nullptr;
#include <Constructor$Entry.h>
#include <Constructor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Constructor$Entry::init$($String* context, $String* spec, $String* expected) {
	$set(this, context, context);
	$set(this, spec, spec);
	$set(this, expected, expected);
}

Constructor$Entry::Constructor$Entry() {
}

$Class* Constructor$Entry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"context", "Ljava/lang/String;", nullptr, $FINAL, $field(Constructor$Entry, context)},
		{"spec", "Ljava/lang/String;", nullptr, $FINAL, $field(Constructor$Entry, spec)},
		{"expected", "Ljava/lang/String;", nullptr, $FINAL, $field(Constructor$Entry, expected)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(Constructor$Entry, init$, void, $String*, $String*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Constructor$Entry", "Constructor", "Entry", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Constructor$Entry",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Constructor"
	};
	$loadClass(Constructor$Entry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Constructor$Entry);
	});
	return class$;
}

$Class* Constructor$Entry::class$ = nullptr;
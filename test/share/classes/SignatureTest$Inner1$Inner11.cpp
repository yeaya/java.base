#include <SignatureTest$Inner1$Inner11.h>
#include <SignatureTest$Inner1.h>
#include <jcpp.h>

using $SignatureTest$Inner1 = ::SignatureTest$Inner1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void SignatureTest$Inner1$Inner11::init$($SignatureTest$Inner1* this$1) {
	$set(this, this$1, this$1);
}

SignatureTest$Inner1$Inner11::SignatureTest$Inner1$Inner11() {
}

$Class* SignatureTest$Inner1$Inner11::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "LSignatureTest$Inner1;", nullptr, $FINAL | $SYNTHETIC, $field(SignatureTest$Inner1$Inner11, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LSignatureTest$Inner1;)V", nullptr, 0, $method(SignatureTest$Inner1$Inner11, init$, void, $SignatureTest$Inner1*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SignatureTest$Inner1", "SignatureTest", "Inner1", 0},
		{"SignatureTest$Inner1$Inner11", "SignatureTest$Inner1", "Inner11", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SignatureTest$Inner1$Inner11",
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
		"SignatureTest"
	};
	$loadClass(SignatureTest$Inner1$Inner11, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SignatureTest$Inner1$Inner11);
	});
	return class$;
}

$Class* SignatureTest$Inner1$Inner11::class$ = nullptr;
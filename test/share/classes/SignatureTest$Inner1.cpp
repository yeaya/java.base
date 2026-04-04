#include <SignatureTest$Inner1.h>
#include <SignatureTest.h>
#include <jcpp.h>

using $SignatureTest = ::SignatureTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void SignatureTest$Inner1::init$($SignatureTest* this$0) {
	$set(this, this$0, this$0);
}

SignatureTest$Inner1::SignatureTest$Inner1() {
}

$Class* SignatureTest$Inner1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LSignatureTest;", nullptr, $FINAL | $SYNTHETIC, $field(SignatureTest$Inner1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LSignatureTest;)V", nullptr, 0, $method(SignatureTest$Inner1, init$, void, $SignatureTest*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SignatureTest$Inner1", "SignatureTest", "Inner1", 0},
		{"SignatureTest$Inner1$Inner11", "SignatureTest$Inner1", "Inner11", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SignatureTest$Inner1",
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
	$loadClass(SignatureTest$Inner1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SignatureTest$Inner1);
	});
	return class$;
}

$Class* SignatureTest$Inner1::class$ = nullptr;
#include <Bash$TestReference.h>
#include <Bash.h>
#include <java/lang/ref/SoftReference.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SoftReference = ::java::lang::ref::SoftReference;

Bash$TestReference* Bash$TestReference::head = nullptr;

void Bash$TestReference::init$(Object$* referent) {
	$SoftReference::init$(referent);
	$set(this, next, Bash$TestReference::head);
	$assignStatic(Bash$TestReference::head, this);
}

Bash$TestReference::Bash$TestReference() {
}

$Class* Bash$TestReference::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"head", "LBash$TestReference;", nullptr, $PUBLIC | $STATIC, $staticField(Bash$TestReference, head)},
		{"next", "LBash$TestReference;", nullptr, $PUBLIC, $field(Bash$TestReference, next)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(Bash$TestReference, init$, void, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Bash$TestReference", "Bash", "TestReference", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Bash$TestReference",
		"java.lang.ref.SoftReference",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Bash"
	};
	$loadClass(Bash$TestReference, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Bash$TestReference);
	});
	return class$;
}

$Class* Bash$TestReference::class$ = nullptr;
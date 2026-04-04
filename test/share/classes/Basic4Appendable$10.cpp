#include <Basic4Appendable$10.h>
#include <Basic4Appendable.h>
#include <java/lang/Appendable.h>
#include <jcpp.h>

using $Basic4Appendable = ::Basic4Appendable;
using $Appendable = ::java::lang::Appendable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Basic4Appendable$10::init$() {
}

void Basic4Appendable$10::init($Appendable* sb, $String* csn, $String* exp) {
	$set(this, sb, $cast($StringBuilder, sb));
	$set(this, csn, csn);
	$set(this, exp, exp);
}

void Basic4Appendable$10::run() {
	$useLocalObjectStack();
	$Basic4Appendable::ck($$str({"StringBuilder.append("_s, this->csn, ")"_s}), this->exp, $($nc(this->sb)->toString()));
}

$Appendable* Basic4Appendable$10::reset($Appendable* sb) {
	return $new($StringBuilder);
}

Basic4Appendable$10::Basic4Appendable$10() {
}

$Class* Basic4Appendable$10::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"csn", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Basic4Appendable$10, csn)},
		{"exp", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Basic4Appendable$10, exp)},
		{"sb", "Ljava/lang/StringBuilder;", nullptr, $PRIVATE, $field(Basic4Appendable$10, sb)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Basic4Appendable$10, init$, void)},
		{"init", "(Ljava/lang/Appendable;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Basic4Appendable$10, init, void, $Appendable*, $String*, $String*)},
		{"reset", "(Ljava/lang/Appendable;)Ljava/lang/Appendable;", nullptr, $PUBLIC, $virtualMethod(Basic4Appendable$10, reset, $Appendable*, $Appendable*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Basic4Appendable$10, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Basic4Appendable",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Basic4Appendable$10", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Basic4Appendable$10",
		"java.lang.Object",
		"BasicRunnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Basic4Appendable"
	};
	$loadClass(Basic4Appendable$10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Basic4Appendable$10);
	});
	return class$;
}

$Class* Basic4Appendable$10::class$ = nullptr;
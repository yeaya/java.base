#include <Basic4Appendable$7.h>
#include <Basic4Appendable.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/lang/Appendable.h>
#include <jcpp.h>

using $Basic4Appendable = ::Basic4Appendable;
using $PrintStream = ::java::io::PrintStream;
using $Appendable = ::java::lang::Appendable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Basic4Appendable$7::init$() {
}

void Basic4Appendable$7::init($Appendable* ps, $String* csn, $String* exp) {
	$nc($cast($PrintStream, ps))->flush();
	$set(this, csn, csn);
	$set(this, exp, exp);
}

void Basic4Appendable$7::run() {
	$useLocalObjectStack();
	$init($Basic4Appendable);
	$Basic4Appendable::ck($$str({"PrintStream.append("_s, this->csn, ")"_s}), this->exp, $($nc($Basic4Appendable::gos)->toString()));
}

$Appendable* Basic4Appendable$7::reset($Appendable* ps) {
	$init($Basic4Appendable);
	$nc($Basic4Appendable::gos)->reset();
	return ps;
}

Basic4Appendable$7::Basic4Appendable$7() {
}

$Class* Basic4Appendable$7::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"csn", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Basic4Appendable$7, csn)},
		{"exp", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Basic4Appendable$7, exp)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Basic4Appendable$7, init$, void)},
		{"init", "(Ljava/lang/Appendable;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Basic4Appendable$7, init, void, $Appendable*, $String*, $String*)},
		{"reset", "(Ljava/lang/Appendable;)Ljava/lang/Appendable;", nullptr, $PUBLIC, $virtualMethod(Basic4Appendable$7, reset, $Appendable*, $Appendable*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Basic4Appendable$7, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Basic4Appendable",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Basic4Appendable$7", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Basic4Appendable$7",
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
	$loadClass(Basic4Appendable$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Basic4Appendable$7);
	});
	return class$;
}

$Class* Basic4Appendable$7::class$ = nullptr;
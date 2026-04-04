#include <Basic4Appendable$5.h>
#include <Basic4Appendable.h>
#include <java/io/CharArrayWriter.h>
#include <java/io/PrintWriter.h>
#include <java/lang/Appendable.h>
#include <jcpp.h>

using $Basic4Appendable = ::Basic4Appendable;
using $PrintWriter = ::java::io::PrintWriter;
using $Appendable = ::java::lang::Appendable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Basic4Appendable$5::init$() {
}

void Basic4Appendable$5::init($Appendable* pw, $String* csn, $String* exp) {
	$nc($cast($PrintWriter, pw))->flush();
	$set(this, csn, csn);
	$set(this, exp, exp);
}

void Basic4Appendable$5::run() {
	$useLocalObjectStack();
	$init($Basic4Appendable);
	$Basic4Appendable::ck($$str({"PrintWriter.append("_s, this->csn, ")"_s}), this->exp, $($nc($Basic4Appendable::gw)->toString()));
}

$Appendable* Basic4Appendable$5::reset($Appendable* pw) {
	$init($Basic4Appendable);
	$nc($Basic4Appendable::gw)->reset();
	return pw;
}

Basic4Appendable$5::Basic4Appendable$5() {
}

$Class* Basic4Appendable$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"csn", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Basic4Appendable$5, csn)},
		{"exp", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Basic4Appendable$5, exp)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Basic4Appendable$5, init$, void)},
		{"init", "(Ljava/lang/Appendable;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Basic4Appendable$5, init, void, $Appendable*, $String*, $String*)},
		{"reset", "(Ljava/lang/Appendable;)Ljava/lang/Appendable;", nullptr, $PUBLIC, $virtualMethod(Basic4Appendable$5, reset, $Appendable*, $Appendable*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Basic4Appendable$5, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Basic4Appendable",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Basic4Appendable$5", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Basic4Appendable$5",
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
	$loadClass(Basic4Appendable$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Basic4Appendable$5);
	});
	return class$;
}

$Class* Basic4Appendable$5::class$ = nullptr;
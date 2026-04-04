#include <Basic4Appendable$8.h>
#include <Basic4Appendable.h>
#include <java/lang/Appendable.h>
#include <java/nio/CharBuffer.h>
#include <jcpp.h>

using $Basic4Appendable = ::Basic4Appendable;
using $Appendable = ::java::lang::Appendable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharBuffer = ::java::nio::CharBuffer;

void Basic4Appendable$8::init$() {
}

void Basic4Appendable$8::init($Appendable* cb, $String* csn, $String* exp) {
	$set(this, cb, $cast($CharBuffer, cb));
	$set(this, csn, csn);
	$set(this, exp, exp);
}

void Basic4Appendable$8::run() {
	$useLocalObjectStack();
	$$nc($nc(this->cb)->limit($nc(this->cb)->position()))->rewind();
	$Basic4Appendable::ck($$str({"CharBuffer.append("_s, this->csn, ")"_s}), this->exp, $($nc(this->cb)->toString()));
}

$Appendable* Basic4Appendable$8::reset($Appendable* cb) {
	$nc($cast($CharBuffer, cb))->clear();
	return cb;
}

Basic4Appendable$8::Basic4Appendable$8() {
}

$Class* Basic4Appendable$8::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"csn", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Basic4Appendable$8, csn)},
		{"exp", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Basic4Appendable$8, exp)},
		{"cb", "Ljava/nio/CharBuffer;", nullptr, $PRIVATE, $field(Basic4Appendable$8, cb)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Basic4Appendable$8, init$, void)},
		{"init", "(Ljava/lang/Appendable;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Basic4Appendable$8, init, void, $Appendable*, $String*, $String*)},
		{"reset", "(Ljava/lang/Appendable;)Ljava/lang/Appendable;", nullptr, $PUBLIC, $virtualMethod(Basic4Appendable$8, reset, $Appendable*, $Appendable*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Basic4Appendable$8, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Basic4Appendable",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Basic4Appendable$8", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Basic4Appendable$8",
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
	$loadClass(Basic4Appendable$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Basic4Appendable$8);
	});
	return class$;
}

$Class* Basic4Appendable$8::class$ = nullptr;
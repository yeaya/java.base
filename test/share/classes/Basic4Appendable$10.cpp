#include <Basic4Appendable$10.h>

#include <Basic4Appendable.h>
#include <java/lang/AbstractStringBuilder.h>
#include <java/lang/Appendable.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Basic4Appendable = ::Basic4Appendable;
using $BasicRunnable = ::BasicRunnable;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $Appendable = ::java::lang::Appendable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _Basic4Appendable$10_FieldInfo_[] = {
	{"csn", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Basic4Appendable$10, csn)},
	{"exp", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Basic4Appendable$10, exp)},
	{"sb", "Ljava/lang/StringBuilder;", nullptr, $PRIVATE, $field(Basic4Appendable$10, sb)},
	{}
};

$MethodInfo _Basic4Appendable$10_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Basic4Appendable$10::*)()>(&Basic4Appendable$10::init$))},
	{"init", "(Ljava/lang/Appendable;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"reset", "(Ljava/lang/Appendable;)Ljava/lang/Appendable;", nullptr, $PUBLIC},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Basic4Appendable$10_EnclosingMethodInfo_ = {
	"Basic4Appendable",
	nullptr,
	nullptr
};

$InnerClassInfo _Basic4Appendable$10_InnerClassesInfo_[] = {
	{"Basic4Appendable$10", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Basic4Appendable$10_ClassInfo_ = {
	$ACC_SUPER,
	"Basic4Appendable$10",
	"java.lang.Object",
	"BasicRunnable",
	_Basic4Appendable$10_FieldInfo_,
	_Basic4Appendable$10_MethodInfo_,
	nullptr,
	&_Basic4Appendable$10_EnclosingMethodInfo_,
	_Basic4Appendable$10_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Basic4Appendable"
};

$Object* allocate$Basic4Appendable$10($Class* clazz) {
	return $of($alloc(Basic4Appendable$10));
}

void Basic4Appendable$10::init$() {
}

void Basic4Appendable$10::init($Appendable* sb, $String* csn, $String* exp) {
	$set(this, sb, $cast($StringBuilder, sb));
	$set(this, csn, csn);
	$set(this, exp, exp);
}

void Basic4Appendable$10::run() {
	$Basic4Appendable::ck($$str({"StringBuilder.append("_s, this->csn, ")"_s}), this->exp, $($nc(this->sb)->toString()));
}

$Appendable* Basic4Appendable$10::reset($Appendable* sb) {
	return $new($StringBuilder);
}

Basic4Appendable$10::Basic4Appendable$10() {
}

$Class* Basic4Appendable$10::load$($String* name, bool initialize) {
	$loadClass(Basic4Appendable$10, name, initialize, &_Basic4Appendable$10_ClassInfo_, allocate$Basic4Appendable$10);
	return class$;
}

$Class* Basic4Appendable$10::class$ = nullptr;
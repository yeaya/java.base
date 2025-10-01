#include <Basic4Appendable$5.h>

#include <Basic4Appendable.h>
#include <java/io/CharArrayWriter.h>
#include <java/io/PrintWriter.h>
#include <java/lang/Appendable.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Basic4Appendable = ::Basic4Appendable;
using $BasicRunnable = ::BasicRunnable;
using $CharArrayWriter = ::java::io::CharArrayWriter;
using $PrintWriter = ::java::io::PrintWriter;
using $Appendable = ::java::lang::Appendable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _Basic4Appendable$5_FieldInfo_[] = {
	{"csn", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Basic4Appendable$5, csn)},
	{"exp", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Basic4Appendable$5, exp)},
	{}
};

$MethodInfo _Basic4Appendable$5_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Basic4Appendable$5::*)()>(&Basic4Appendable$5::init$))},
	{"init", "(Ljava/lang/Appendable;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"reset", "(Ljava/lang/Appendable;)Ljava/lang/Appendable;", nullptr, $PUBLIC},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Basic4Appendable$5_EnclosingMethodInfo_ = {
	"Basic4Appendable",
	nullptr,
	nullptr
};

$InnerClassInfo _Basic4Appendable$5_InnerClassesInfo_[] = {
	{"Basic4Appendable$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Basic4Appendable$5_ClassInfo_ = {
	$ACC_SUPER,
	"Basic4Appendable$5",
	"java.lang.Object",
	"BasicRunnable",
	_Basic4Appendable$5_FieldInfo_,
	_Basic4Appendable$5_MethodInfo_,
	nullptr,
	&_Basic4Appendable$5_EnclosingMethodInfo_,
	_Basic4Appendable$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Basic4Appendable"
};

$Object* allocate$Basic4Appendable$5($Class* clazz) {
	return $of($alloc(Basic4Appendable$5));
}

void Basic4Appendable$5::init$() {
}

void Basic4Appendable$5::init($Appendable* pw, $String* csn, $String* exp) {
	$nc(($cast($PrintWriter, pw)))->flush();
	$set(this, csn, csn);
	$set(this, exp, exp);
}

void Basic4Appendable$5::run() {
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
	$loadClass(Basic4Appendable$5, name, initialize, &_Basic4Appendable$5_ClassInfo_, allocate$Basic4Appendable$5);
	return class$;
}

$Class* Basic4Appendable$5::class$ = nullptr;
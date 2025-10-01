#include <Basic4Appendable$8.h>

#include <Basic4Appendable.h>
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
#include <java/nio/CharBuffer.h>
#include <jcpp.h>

using $Basic4Appendable = ::Basic4Appendable;
using $BasicRunnable = ::BasicRunnable;
using $Appendable = ::java::lang::Appendable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $CharBuffer = ::java::nio::CharBuffer;

$FieldInfo _Basic4Appendable$8_FieldInfo_[] = {
	{"csn", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Basic4Appendable$8, csn)},
	{"exp", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Basic4Appendable$8, exp)},
	{"cb", "Ljava/nio/CharBuffer;", nullptr, $PRIVATE, $field(Basic4Appendable$8, cb)},
	{}
};

$MethodInfo _Basic4Appendable$8_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Basic4Appendable$8::*)()>(&Basic4Appendable$8::init$))},
	{"init", "(Ljava/lang/Appendable;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"reset", "(Ljava/lang/Appendable;)Ljava/lang/Appendable;", nullptr, $PUBLIC},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Basic4Appendable$8_EnclosingMethodInfo_ = {
	"Basic4Appendable",
	nullptr,
	nullptr
};

$InnerClassInfo _Basic4Appendable$8_InnerClassesInfo_[] = {
	{"Basic4Appendable$8", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Basic4Appendable$8_ClassInfo_ = {
	$ACC_SUPER,
	"Basic4Appendable$8",
	"java.lang.Object",
	"BasicRunnable",
	_Basic4Appendable$8_FieldInfo_,
	_Basic4Appendable$8_MethodInfo_,
	nullptr,
	&_Basic4Appendable$8_EnclosingMethodInfo_,
	_Basic4Appendable$8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Basic4Appendable"
};

$Object* allocate$Basic4Appendable$8($Class* clazz) {
	return $of($alloc(Basic4Appendable$8));
}

void Basic4Appendable$8::init$() {
}

void Basic4Appendable$8::init($Appendable* cb, $String* csn, $String* exp) {
	$set(this, cb, $cast($CharBuffer, cb));
	$set(this, csn, csn);
	$set(this, exp, exp);
}

void Basic4Appendable$8::run() {
	$nc($($nc(this->cb)->limit($nc(this->cb)->position())))->rewind();
	$Basic4Appendable::ck($$str({"CharBuffer.append("_s, this->csn, ")"_s}), this->exp, $($nc(this->cb)->toString()));
}

$Appendable* Basic4Appendable$8::reset($Appendable* cb) {
	$nc(($cast($CharBuffer, cb)))->clear();
	return cb;
}

Basic4Appendable$8::Basic4Appendable$8() {
}

$Class* Basic4Appendable$8::load$($String* name, bool initialize) {
	$loadClass(Basic4Appendable$8, name, initialize, &_Basic4Appendable$8_ClassInfo_, allocate$Basic4Appendable$8);
	return class$;
}

$Class* Basic4Appendable$8::class$ = nullptr;
#include <Basic4Appendable$2.h>

#include <Basic4Appendable.h>
#include <java/io/CharArrayWriter.h>
#include <java/lang/Appendable.h>
#include <jcpp.h>

using $Basic4Appendable = ::Basic4Appendable;
using $CharArrayWriter = ::java::io::CharArrayWriter;
using $Appendable = ::java::lang::Appendable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _Basic4Appendable$2_FieldInfo_[] = {
	{"csn", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Basic4Appendable$2, csn)},
	{"exp", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Basic4Appendable$2, exp)},
	{"cw", "Ljava/io/CharArrayWriter;", nullptr, $PRIVATE, $field(Basic4Appendable$2, cw)},
	{}
};

$MethodInfo _Basic4Appendable$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Basic4Appendable$2, init$, void)},
	{"init", "(Ljava/lang/Appendable;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Basic4Appendable$2, init, void, $Appendable*, $String*, $String*)},
	{"reset", "(Ljava/lang/Appendable;)Ljava/lang/Appendable;", nullptr, $PUBLIC, $virtualMethod(Basic4Appendable$2, reset, $Appendable*, $Appendable*)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Basic4Appendable$2, run, void)},
	{}
};

$EnclosingMethodInfo _Basic4Appendable$2_EnclosingMethodInfo_ = {
	"Basic4Appendable",
	nullptr,
	nullptr
};

$InnerClassInfo _Basic4Appendable$2_InnerClassesInfo_[] = {
	{"Basic4Appendable$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Basic4Appendable$2_ClassInfo_ = {
	$ACC_SUPER,
	"Basic4Appendable$2",
	"java.lang.Object",
	"BasicRunnable",
	_Basic4Appendable$2_FieldInfo_,
	_Basic4Appendable$2_MethodInfo_,
	nullptr,
	&_Basic4Appendable$2_EnclosingMethodInfo_,
	_Basic4Appendable$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Basic4Appendable"
};

$Object* allocate$Basic4Appendable$2($Class* clazz) {
	return $of($alloc(Basic4Appendable$2));
}

void Basic4Appendable$2::init$() {
}

void Basic4Appendable$2::init($Appendable* cw, $String* csn, $String* exp) {
	$set(this, cw, $cast($CharArrayWriter, cw));
	$set(this, csn, csn);
	$set(this, exp, exp);
}

void Basic4Appendable$2::run() {
	$useLocalCurrentObjectStackCache();
	$Basic4Appendable::ck($$str({"CharArrayWriter.append("_s, this->csn, ")"_s}), this->exp, $($nc(this->cw)->toString()));
}

$Appendable* Basic4Appendable$2::reset($Appendable* cw) {
	$nc(($cast($CharArrayWriter, cw)))->reset();
	return cw;
}

Basic4Appendable$2::Basic4Appendable$2() {
}

$Class* Basic4Appendable$2::load$($String* name, bool initialize) {
	$loadClass(Basic4Appendable$2, name, initialize, &_Basic4Appendable$2_ClassInfo_, allocate$Basic4Appendable$2);
	return class$;
}

$Class* Basic4Appendable$2::class$ = nullptr;
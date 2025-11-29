#include <Basic4Appendable$7.h>

#include <Basic4Appendable.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/lang/Appendable.h>
#include <jcpp.h>

using $Basic4Appendable = ::Basic4Appendable;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $PrintStream = ::java::io::PrintStream;
using $Appendable = ::java::lang::Appendable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _Basic4Appendable$7_FieldInfo_[] = {
	{"csn", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Basic4Appendable$7, csn)},
	{"exp", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Basic4Appendable$7, exp)},
	{}
};

$MethodInfo _Basic4Appendable$7_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Basic4Appendable$7::*)()>(&Basic4Appendable$7::init$))},
	{"init", "(Ljava/lang/Appendable;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"reset", "(Ljava/lang/Appendable;)Ljava/lang/Appendable;", nullptr, $PUBLIC},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Basic4Appendable$7_EnclosingMethodInfo_ = {
	"Basic4Appendable",
	nullptr,
	nullptr
};

$InnerClassInfo _Basic4Appendable$7_InnerClassesInfo_[] = {
	{"Basic4Appendable$7", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Basic4Appendable$7_ClassInfo_ = {
	$ACC_SUPER,
	"Basic4Appendable$7",
	"java.lang.Object",
	"BasicRunnable",
	_Basic4Appendable$7_FieldInfo_,
	_Basic4Appendable$7_MethodInfo_,
	nullptr,
	&_Basic4Appendable$7_EnclosingMethodInfo_,
	_Basic4Appendable$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Basic4Appendable"
};

$Object* allocate$Basic4Appendable$7($Class* clazz) {
	return $of($alloc(Basic4Appendable$7));
}

void Basic4Appendable$7::init$() {
}

void Basic4Appendable$7::init($Appendable* ps, $String* csn, $String* exp) {
	$nc(($cast($PrintStream, ps)))->flush();
	$set(this, csn, csn);
	$set(this, exp, exp);
}

void Basic4Appendable$7::run() {
	$useLocalCurrentObjectStackCache();
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
	$loadClass(Basic4Appendable$7, name, initialize, &_Basic4Appendable$7_ClassInfo_, allocate$Basic4Appendable$7);
	return class$;
}

$Class* Basic4Appendable$7::class$ = nullptr;
#include <java/lang/Throwable$PrintStreamOrWriter.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$MethodInfo _Throwable$PrintStreamOrWriter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Throwable$PrintStreamOrWriter::*)()>(&Throwable$PrintStreamOrWriter::init$))},
	{"lock", "()Ljava/lang/Object;", nullptr, $ABSTRACT},
	{"println", "(Ljava/lang/Object;)V", nullptr, $ABSTRACT},
	{}
};

$InnerClassInfo _Throwable$PrintStreamOrWriter_InnerClassesInfo_[] = {
	{"java.lang.Throwable$PrintStreamOrWriter", "java.lang.Throwable", "PrintStreamOrWriter", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Throwable$PrintStreamOrWriter_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.lang.Throwable$PrintStreamOrWriter",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Throwable$PrintStreamOrWriter_MethodInfo_,
	nullptr,
	nullptr,
	_Throwable$PrintStreamOrWriter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.Throwable"
};

$Object* allocate$Throwable$PrintStreamOrWriter($Class* clazz) {
	return $of($alloc(Throwable$PrintStreamOrWriter));
}

void Throwable$PrintStreamOrWriter::init$() {
}

Throwable$PrintStreamOrWriter::Throwable$PrintStreamOrWriter() {
}

$Class* Throwable$PrintStreamOrWriter::load$($String* name, bool initialize) {
	$loadClass(Throwable$PrintStreamOrWriter, name, initialize, &_Throwable$PrintStreamOrWriter_ClassInfo_, allocate$Throwable$PrintStreamOrWriter);
	return class$;
}

$Class* Throwable$PrintStreamOrWriter::class$ = nullptr;

	} // lang
} // java
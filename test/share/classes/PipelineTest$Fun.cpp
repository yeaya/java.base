#include <PipelineTest$Fun.h>

#include <PipelineTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _PipelineTest$Fun_MethodInfo_[] = {
	{"f", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{}
};

$InnerClassInfo _PipelineTest$Fun_InnerClassesInfo_[] = {
	{"PipelineTest$Fun", "PipelineTest", "Fun", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _PipelineTest$Fun_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"PipelineTest$Fun",
	nullptr,
	nullptr,
	nullptr,
	_PipelineTest$Fun_MethodInfo_,
	nullptr,
	nullptr,
	_PipelineTest$Fun_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"PipelineTest"
};

$Object* allocate$PipelineTest$Fun($Class* clazz) {
	return $of($alloc(PipelineTest$Fun));
}

$Class* PipelineTest$Fun::load$($String* name, bool initialize) {
	$loadClass(PipelineTest$Fun, name, initialize, &_PipelineTest$Fun_ClassInfo_, allocate$PipelineTest$Fun);
	return class$;
}

$Class* PipelineTest$Fun::class$ = nullptr;
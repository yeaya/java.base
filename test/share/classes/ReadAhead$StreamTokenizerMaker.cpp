#include <ReadAhead$StreamTokenizerMaker.h>

#include <ReadAhead.h>
#include <java/io/StreamTokenizer.h>
#include <jcpp.h>

using $StreamTokenizer = ::java::io::StreamTokenizer;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ReadAhead$StreamTokenizerMaker_MethodInfo_[] = {
	{"create", "(Ljava/lang/String;I)Ljava/io/StreamTokenizer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ReadAhead$StreamTokenizerMaker, create, $StreamTokenizer*, $String*, int32_t)},
	{}
};

$InnerClassInfo _ReadAhead$StreamTokenizerMaker_InnerClassesInfo_[] = {
	{"ReadAhead$StreamTokenizerMaker", "ReadAhead", "StreamTokenizerMaker", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ReadAhead$StreamTokenizerMaker_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"ReadAhead$StreamTokenizerMaker",
	nullptr,
	nullptr,
	nullptr,
	_ReadAhead$StreamTokenizerMaker_MethodInfo_,
	nullptr,
	nullptr,
	_ReadAhead$StreamTokenizerMaker_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ReadAhead"
};

$Object* allocate$ReadAhead$StreamTokenizerMaker($Class* clazz) {
	return $of($alloc(ReadAhead$StreamTokenizerMaker));
}

$Class* ReadAhead$StreamTokenizerMaker::load$($String* name, bool initialize) {
	$loadClass(ReadAhead$StreamTokenizerMaker, name, initialize, &_ReadAhead$StreamTokenizerMaker_ClassInfo_, allocate$ReadAhead$StreamTokenizerMaker);
	return class$;
}

$Class* ReadAhead$StreamTokenizerMaker::class$ = nullptr;
#include <ReadAhead$1.h>

#include <ReadAhead$LimitedInputStream.h>
#include <ReadAhead.h>
#include <java/io/InputStream.h>
#include <java/io/StreamTokenizer.h>
#include <jcpp.h>

using $ReadAhead = ::ReadAhead;
using $ReadAhead$LimitedInputStream = ::ReadAhead$LimitedInputStream;
using $ReadAhead$StreamTokenizerMaker = ::ReadAhead$StreamTokenizerMaker;
using $InputStream = ::java::io::InputStream;
using $StreamTokenizer = ::java::io::StreamTokenizer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ReadAhead$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ReadAhead$1::*)()>(&ReadAhead$1::init$))},
	{"create", "(Ljava/lang/String;I)Ljava/io/StreamTokenizer;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ReadAhead$1_EnclosingMethodInfo_ = {
	"ReadAhead",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _ReadAhead$1_InnerClassesInfo_[] = {
	{"ReadAhead$1", nullptr, nullptr, 0},
	{"ReadAhead$StreamTokenizerMaker", "ReadAhead", "StreamTokenizerMaker", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ReadAhead$1_ClassInfo_ = {
	$ACC_SUPER,
	"ReadAhead$1",
	"java.lang.Object",
	"ReadAhead$StreamTokenizerMaker",
	nullptr,
	_ReadAhead$1_MethodInfo_,
	nullptr,
	&_ReadAhead$1_EnclosingMethodInfo_,
	_ReadAhead$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ReadAhead"
};

$Object* allocate$ReadAhead$1($Class* clazz) {
	return $of($alloc(ReadAhead$1));
}

void ReadAhead$1::init$() {
}

$StreamTokenizer* ReadAhead$1::create($String* input, int32_t limit) {
	return $new($StreamTokenizer, static_cast<$InputStream*>($$new($ReadAhead$LimitedInputStream, input, limit)));
}

ReadAhead$1::ReadAhead$1() {
}

$Class* ReadAhead$1::load$($String* name, bool initialize) {
	$loadClass(ReadAhead$1, name, initialize, &_ReadAhead$1_ClassInfo_, allocate$ReadAhead$1);
	return class$;
}

$Class* ReadAhead$1::class$ = nullptr;
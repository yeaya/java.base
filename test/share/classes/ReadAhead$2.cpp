#include <ReadAhead$2.h>

#include <ReadAhead$LimitedReader.h>
#include <ReadAhead.h>
#include <java/io/Reader.h>
#include <java/io/StreamTokenizer.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ReadAhead = ::ReadAhead;
using $ReadAhead$LimitedReader = ::ReadAhead$LimitedReader;
using $ReadAhead$StreamTokenizerMaker = ::ReadAhead$StreamTokenizerMaker;
using $Reader = ::java::io::Reader;
using $StreamTokenizer = ::java::io::StreamTokenizer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ReadAhead$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ReadAhead$2::*)()>(&ReadAhead$2::init$))},
	{"create", "(Ljava/lang/String;I)Ljava/io/StreamTokenizer;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ReadAhead$2_EnclosingMethodInfo_ = {
	"ReadAhead",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _ReadAhead$2_InnerClassesInfo_[] = {
	{"ReadAhead$2", nullptr, nullptr, 0},
	{"ReadAhead$StreamTokenizerMaker", "ReadAhead", "StreamTokenizerMaker", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ReadAhead$2_ClassInfo_ = {
	$ACC_SUPER,
	"ReadAhead$2",
	"java.lang.Object",
	"ReadAhead$StreamTokenizerMaker",
	nullptr,
	_ReadAhead$2_MethodInfo_,
	nullptr,
	&_ReadAhead$2_EnclosingMethodInfo_,
	_ReadAhead$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ReadAhead"
};

$Object* allocate$ReadAhead$2($Class* clazz) {
	return $of($alloc(ReadAhead$2));
}

void ReadAhead$2::init$() {
}

$StreamTokenizer* ReadAhead$2::create($String* input, int32_t limit) {
	return $new($StreamTokenizer, static_cast<$Reader*>($$new($ReadAhead$LimitedReader, input, limit)));
}

ReadAhead$2::ReadAhead$2() {
}

$Class* ReadAhead$2::load$($String* name, bool initialize) {
	$loadClass(ReadAhead$2, name, initialize, &_ReadAhead$2_ClassInfo_, allocate$ReadAhead$2);
	return class$;
}

$Class* ReadAhead$2::class$ = nullptr;
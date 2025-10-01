#include <java/util/stream/WhileOps$DropWhileOp.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/stream/WhileOps$DropWhileSink.h>
#include <java/util/stream/WhileOps.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Sink = ::java::util::stream::Sink;
using $WhileOps = ::java::util::stream::WhileOps;
using $WhileOps$DropWhileSink = ::java::util::stream::WhileOps$DropWhileSink;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _WhileOps$DropWhileOp_MethodInfo_[] = {
	{"opWrapSink", "(Ljava/util/stream/Sink;Z)Ljava/util/stream/WhileOps$DropWhileSink;", "(Ljava/util/stream/Sink<TT;>;Z)Ljava/util/stream/WhileOps$DropWhileSink<TT;>;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _WhileOps$DropWhileOp_InnerClassesInfo_[] = {
	{"java.util.stream.WhileOps$DropWhileOp", "java.util.stream.WhileOps", "DropWhileOp", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _WhileOps$DropWhileOp_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"java.util.stream.WhileOps$DropWhileOp",
	nullptr,
	nullptr,
	nullptr,
	_WhileOps$DropWhileOp_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_WhileOps$DropWhileOp_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.WhileOps"
};

$Object* allocate$WhileOps$DropWhileOp($Class* clazz) {
	return $of($alloc(WhileOps$DropWhileOp));
}

$Class* WhileOps$DropWhileOp::load$($String* name, bool initialize) {
	$loadClass(WhileOps$DropWhileOp, name, initialize, &_WhileOps$DropWhileOp_ClassInfo_, allocate$WhileOps$DropWhileOp);
	return class$;
}

$Class* WhileOps$DropWhileOp::class$ = nullptr;

		} // stream
	} // util
} // java
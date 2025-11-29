#include <java/util/stream/WhileOps$DropWhileSink.h>

#include <java/util/stream/WhileOps.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _WhileOps$DropWhileSink_MethodInfo_[] = {
	{"getDropCount", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _WhileOps$DropWhileSink_InnerClassesInfo_[] = {
	{"java.util.stream.WhileOps$DropWhileSink", "java.util.stream.WhileOps", "DropWhileSink", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _WhileOps$DropWhileSink_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"java.util.stream.WhileOps$DropWhileSink",
	nullptr,
	"java.util.stream.Sink",
	nullptr,
	_WhileOps$DropWhileSink_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/stream/Sink<TT;>;",
	nullptr,
	_WhileOps$DropWhileSink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.WhileOps"
};

$Object* allocate$WhileOps$DropWhileSink($Class* clazz) {
	return $of($alloc(WhileOps$DropWhileSink));
}

$Class* WhileOps$DropWhileSink::load$($String* name, bool initialize) {
	$loadClass(WhileOps$DropWhileSink, name, initialize, &_WhileOps$DropWhileSink_ClassInfo_, allocate$WhileOps$DropWhileSink);
	return class$;
}

$Class* WhileOps$DropWhileSink::class$ = nullptr;

		} // stream
	} // util
} // java
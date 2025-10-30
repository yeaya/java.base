#include <java/util/stream/FindOps$FindSink.h>

#include <java/util/stream/FindOps.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FindOps = ::java::util::stream::FindOps;
using $TerminalSink = ::java::util::stream::TerminalSink;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _FindOps$FindSink_FieldInfo_[] = {
	{"hasValue", "Z", nullptr, 0, $field(FindOps$FindSink, hasValue)},
	{"value", "Ljava/lang/Object;", "TT;", 0, $field(FindOps$FindSink, value)},
	{}
};

$MethodInfo _FindOps$FindSink_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FindOps$FindSink::*)()>(&FindOps$FindSink::init$))},
	{"accept", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC},
	{"cancellationRequested", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FindOps$FindSink_InnerClassesInfo_[] = {
	{"java.util.stream.FindOps$FindSink", "java.util.stream.FindOps", "FindSink", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.FindOps$FindSink$OfDouble", "java.util.stream.FindOps$FindSink", "OfDouble", $STATIC | $FINAL},
	{"java.util.stream.FindOps$FindSink$OfLong", "java.util.stream.FindOps$FindSink", "OfLong", $STATIC | $FINAL},
	{"java.util.stream.FindOps$FindSink$OfInt", "java.util.stream.FindOps$FindSink", "OfInt", $STATIC | $FINAL},
	{"java.util.stream.FindOps$FindSink$OfRef", "java.util.stream.FindOps$FindSink", "OfRef", $STATIC | $FINAL},
	{}
};

$ClassInfo _FindOps$FindSink_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.FindOps$FindSink",
	"java.lang.Object",
	"java.util.stream.TerminalSink",
	_FindOps$FindSink_FieldInfo_,
	_FindOps$FindSink_MethodInfo_,
	"<T:Ljava/lang/Object;O:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/stream/TerminalSink<TT;TO;>;",
	nullptr,
	_FindOps$FindSink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.FindOps"
};

$Object* allocate$FindOps$FindSink($Class* clazz) {
	return $of($alloc(FindOps$FindSink));
}

void FindOps$FindSink::init$() {
}

void FindOps$FindSink::accept(Object$* value) {
	if (!this->hasValue) {
		this->hasValue = true;
		$set(this, value, value);
	}
}

bool FindOps$FindSink::cancellationRequested() {
	return this->hasValue;
}

FindOps$FindSink::FindOps$FindSink() {
}

$Class* FindOps$FindSink::load$($String* name, bool initialize) {
	$loadClass(FindOps$FindSink, name, initialize, &_FindOps$FindSink_ClassInfo_, allocate$FindOps$FindSink);
	return class$;
}

$Class* FindOps$FindSink::class$ = nullptr;

		} // stream
	} // util
} // java
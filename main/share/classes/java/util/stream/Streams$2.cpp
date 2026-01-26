#include <java/util/stream/Streams$2.h>

#include <java/util/stream/BaseStream.h>
#include <java/util/stream/Streams.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BaseStream = ::java::util::stream::BaseStream;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _Streams$2_FieldInfo_[] = {
	{"val$b", "Ljava/util/stream/BaseStream;", nullptr, $FINAL | $SYNTHETIC, $field(Streams$2, val$b)},
	{"val$a", "Ljava/util/stream/BaseStream;", nullptr, $FINAL | $SYNTHETIC, $field(Streams$2, val$a)},
	{}
};

$MethodInfo _Streams$2_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/BaseStream;Ljava/util/stream/BaseStream;)V", "()V", 0, $method(Streams$2, init$, void, $BaseStream*, $BaseStream*)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Streams$2, run, void)},
	{}
};

$EnclosingMethodInfo _Streams$2_EnclosingMethodInfo_ = {
	"java.util.stream.Streams",
	"composedClose",
	"(Ljava/util/stream/BaseStream;Ljava/util/stream/BaseStream;)Ljava/lang/Runnable;"
};

$InnerClassInfo _Streams$2_InnerClassesInfo_[] = {
	{"java.util.stream.Streams$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Streams$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.Streams$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_Streams$2_FieldInfo_,
	_Streams$2_MethodInfo_,
	nullptr,
	&_Streams$2_EnclosingMethodInfo_,
	_Streams$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Streams"
};

$Object* allocate$Streams$2($Class* clazz) {
	return $of($alloc(Streams$2));
}

void Streams$2::init$($BaseStream* val$a, $BaseStream* val$b) {
	$set(this, val$a, val$a);
	$set(this, val$b, val$b);
}

void Streams$2::run() {
	try {
		$nc(this->val$a)->close();
	} catch ($Throwable& e1) {
		try {
			$nc(this->val$b)->close();
		} catch ($Throwable& e2) {
			try {
				e1->addSuppressed(e2);
			} catch ($Throwable& ignore) {
			}
		}
		$throw(e1);
	}
	$nc(this->val$b)->close();
}

Streams$2::Streams$2() {
}

$Class* Streams$2::load$($String* name, bool initialize) {
	$loadClass(Streams$2, name, initialize, &_Streams$2_ClassInfo_, allocate$Streams$2);
	return class$;
}

$Class* Streams$2::class$ = nullptr;

		} // stream
	} // util
} // java
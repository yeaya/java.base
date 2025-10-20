#include <java/util/stream/Streams$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/stream/Streams.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $Streams = ::java::util::stream::Streams;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _Streams$1_FieldInfo_[] = {
	{"val$b", "Ljava/lang/Runnable;", nullptr, $FINAL | $SYNTHETIC, $field(Streams$1, val$b)},
	{"val$a", "Ljava/lang/Runnable;", nullptr, $FINAL | $SYNTHETIC, $field(Streams$1, val$a)},
	{}
};

$MethodInfo _Streams$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Runnable;Ljava/lang/Runnable;)V", "()V", 0, $method(static_cast<void(Streams$1::*)($Runnable*,$Runnable*)>(&Streams$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Streams$1_EnclosingMethodInfo_ = {
	"java.util.stream.Streams",
	"composeWithExceptions",
	"(Ljava/lang/Runnable;Ljava/lang/Runnable;)Ljava/lang/Runnable;"
};

$InnerClassInfo _Streams$1_InnerClassesInfo_[] = {
	{"java.util.stream.Streams$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Streams$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.Streams$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_Streams$1_FieldInfo_,
	_Streams$1_MethodInfo_,
	nullptr,
	&_Streams$1_EnclosingMethodInfo_,
	_Streams$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Streams"
};

$Object* allocate$Streams$1($Class* clazz) {
	return $of($alloc(Streams$1));
}

void Streams$1::init$($Runnable* val$a, $Runnable* val$b) {
	$set(this, val$a, val$a);
	$set(this, val$b, val$b);
}

void Streams$1::run() {
	$useLocalCurrentObjectStackCache();
	try {
		$nc(this->val$a)->run();
	} catch ($Throwable&) {
		$var($Throwable, e1, $catch());
		try {
			$nc(this->val$b)->run();
		} catch ($Throwable&) {
			$var($Throwable, e2, $catch());
			try {
				e1->addSuppressed(e2);
			} catch ($Throwable&) {
				$catch();
			}
		}
		$throw(e1);
	}
	$nc(this->val$b)->run();
}

Streams$1::Streams$1() {
}

$Class* Streams$1::load$($String* name, bool initialize) {
	$loadClass(Streams$1, name, initialize, &_Streams$1_ClassInfo_, allocate$Streams$1);
	return class$;
}

$Class* Streams$1::class$ = nullptr;

		} // stream
	} // util
} // java
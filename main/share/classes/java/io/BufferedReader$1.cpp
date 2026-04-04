#include <java/io/BufferedReader$1.h>
#include <java/io/BufferedReader.h>
#include <java/io/IOException.h>
#include <java/io/UncheckedIOException.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $BufferedReader = ::java::io::BufferedReader;
using $IOException = ::java::io::IOException;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace io {

void BufferedReader$1::init$($BufferedReader* this$0) {
	$set(this, this$0, this$0);
	$set(this, nextLine, nullptr);
}

bool BufferedReader$1::hasNext() {
	if (this->nextLine != nullptr) {
		return true;
	} else {
		try {
			$set(this, nextLine, this->this$0->readLine());
			return (this->nextLine != nullptr);
		} catch ($IOException& e) {
			$throwNew($UncheckedIOException, e);
		}
	}
	$shouldNotReachHere();
}

$Object* BufferedReader$1::next() {
	if (this->nextLine != nullptr || hasNext()) {
		$var($String, line, this->nextLine);
		$set(this, nextLine, nullptr);
		return $of(line);
	} else {
		$throwNew($NoSuchElementException);
	}
}

BufferedReader$1::BufferedReader$1() {
}

$Class* BufferedReader$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/io/BufferedReader;", nullptr, $FINAL | $SYNTHETIC, $field(BufferedReader$1, this$0)},
		{"nextLine", "Ljava/lang/String;", nullptr, 0, $field(BufferedReader$1, nextLine)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/BufferedReader;)V", nullptr, 0, $method(BufferedReader$1, init$, void, $BufferedReader*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(BufferedReader$1, hasNext, bool)},
		{"next", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BufferedReader$1, next, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.io.BufferedReader",
		"lines",
		"()Ljava/util/stream/Stream;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.BufferedReader$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.io.BufferedReader$1",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.io.BufferedReader"
	};
	$loadClass(BufferedReader$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BufferedReader$1);
	});
	return class$;
}

$Class* BufferedReader$1::class$ = nullptr;

	} // io
} // java
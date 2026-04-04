#include <LotsOfStreams.h>
#include <LotsOfStreams$LOSEnumeration.h>
#include <java/io/InputStream.h>
#include <java/io/SequenceInputStream.h>
#include <jcpp.h>

#undef MAX_SUBSTREAMS

using $LotsOfStreams$LOSEnumeration = ::LotsOfStreams$LOSEnumeration;
using $InputStream = ::java::io::InputStream;
using $SequenceInputStream = ::java::io::SequenceInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void LotsOfStreams::init$() {
}

void LotsOfStreams::main($StringArray* argv) {
	$useLocalObjectStack();
	{
		$var($InputStream, stream, $new($SequenceInputStream, $$new($LotsOfStreams$LOSEnumeration)));
		$var($Throwable, var$0, nullptr);
		try {
			try {
				stream->read();
			} catch ($Throwable& t$) {
				try {
					stream->close();
				} catch ($Throwable& x2) {
					t$->addSuppressed(x2);
				}
				$throw(t$);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			stream->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	{
		$var($InputStream, stream, $new($SequenceInputStream, $$new($LotsOfStreams$LOSEnumeration)));
		$var($Throwable, var$2, nullptr);
		try {
			try {
				$var($bytes, b, $new($bytes, 1));
				stream->read(b, 0, 1);
			} catch ($Throwable& t$) {
				try {
					stream->close();
				} catch ($Throwable& x2) {
					t$->addSuppressed(x2);
				}
				$throw(t$);
			}
		} catch ($Throwable& var$3) {
			$assign(var$2, var$3);
		} /*finally*/ {
			stream->close();
		}
		if (var$2 != nullptr) {
			$throw(var$2);
		}
	}
}

LotsOfStreams::LotsOfStreams() {
}

$Class* LotsOfStreams::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"MAX_SUBSTREAMS", "I", nullptr, $STATIC | $FINAL, $constField(LotsOfStreams, MAX_SUBSTREAMS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LotsOfStreams, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(LotsOfStreams, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"LotsOfStreams$LOSEnumeration", "LotsOfStreams", "LOSEnumeration", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"LotsOfStreams",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"LotsOfStreams$LOSEnumeration"
	};
	$loadClass(LotsOfStreams, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LotsOfStreams);
	});
	return class$;
}

$Class* LotsOfStreams::class$ = nullptr;
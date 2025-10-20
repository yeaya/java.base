#include <LotsOfStreams.h>

#include <LotsOfStreams$LOSEnumeration.h>
#include <java/io/InputStream.h>
#include <java/io/SequenceInputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <jcpp.h>

#undef MAX_SUBSTREAMS

using $LotsOfStreams$LOSEnumeration = ::LotsOfStreams$LOSEnumeration;
using $InputStream = ::java::io::InputStream;
using $SequenceInputStream = ::java::io::SequenceInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Enumeration = ::java::util::Enumeration;

$FieldInfo _LotsOfStreams_FieldInfo_[] = {
	{"MAX_SUBSTREAMS", "I", nullptr, $STATIC | $FINAL, $constField(LotsOfStreams, MAX_SUBSTREAMS)},
	{}
};

$MethodInfo _LotsOfStreams_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LotsOfStreams::*)()>(&LotsOfStreams::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&LotsOfStreams::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _LotsOfStreams_InnerClassesInfo_[] = {
	{"LotsOfStreams$LOSEnumeration", "LotsOfStreams", "LOSEnumeration", $STATIC},
	{}
};

$ClassInfo _LotsOfStreams_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"LotsOfStreams",
	"java.lang.Object",
	nullptr,
	_LotsOfStreams_FieldInfo_,
	_LotsOfStreams_MethodInfo_,
	nullptr,
	nullptr,
	_LotsOfStreams_InnerClassesInfo_,
	nullptr,
	nullptr,
	"LotsOfStreams$LOSEnumeration"
};

$Object* allocate$LotsOfStreams($Class* clazz) {
	return $of($alloc(LotsOfStreams));
}

void LotsOfStreams::init$() {
}

void LotsOfStreams::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
	{
		$var($InputStream, stream, $new($SequenceInputStream, $$new($LotsOfStreams$LOSEnumeration)));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					stream->read();
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						stream->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				stream->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	{
		$var($InputStream, stream, $new($SequenceInputStream, $$new($LotsOfStreams$LOSEnumeration)));
		{
			$var($Throwable, var$1, nullptr);
			try {
				try {
					$var($bytes, b, $new($bytes, 1));
					stream->read(b, 0, 1);
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						stream->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$1, $catch());
			} /*finally*/ {
				stream->close();
			}
			if (var$1 != nullptr) {
				$throw(var$1);
			}
		}
	}
}

LotsOfStreams::LotsOfStreams() {
}

$Class* LotsOfStreams::load$($String* name, bool initialize) {
	$loadClass(LotsOfStreams, name, initialize, &_LotsOfStreams_ClassInfo_, allocate$LotsOfStreams);
	return class$;
}

$Class* LotsOfStreams::class$ = nullptr;
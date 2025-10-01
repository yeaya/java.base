#include <OverflowInRead.h>

#include <java/io/StringBufferInputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef MAX_VALUE

using $InputStream = ::java::io::InputStream;
using $StringBufferInputStream = ::java::io::StringBufferInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

$MethodInfo _OverflowInRead_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(OverflowInRead::*)()>(&OverflowInRead::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&OverflowInRead::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _OverflowInRead_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"OverflowInRead",
	"java.lang.Object",
	nullptr,
	nullptr,
	_OverflowInRead_MethodInfo_
};

$Object* allocate$OverflowInRead($Class* clazz) {
	return $of($alloc(OverflowInRead));
}

void OverflowInRead::init$() {
}

void OverflowInRead::main($StringArray* args) {
	$var($String, s, "_123456789_123456789_123456789_123456789"_s);
	{
		$var($StringBufferInputStream, sbis, $new($StringBufferInputStream, s));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					int32_t len1 = 33;
					$var($bytes, buf1, $new($bytes, len1));
					if (sbis->read(buf1, 0, len1) != len1) {
						$throwNew($Exception, $$str({"Expected to read "_s, $$str(len1), " bytes"_s}));
					}
					int32_t len2 = $Integer::MAX_VALUE - 32;
					$var($bytes, buf2, $new($bytes, len2));
					int32_t expLen2 = s->length() - len1;
					if (sbis->read(buf2, 0, len2) != expLen2) {
						$throwNew($Exception, $$str({"Expected to read "_s, $$str(expLen2), " bytes"_s}));
					}
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						sbis->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				sbis->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

OverflowInRead::OverflowInRead() {
}

$Class* OverflowInRead::load$($String* name, bool initialize) {
	$loadClass(OverflowInRead, name, initialize, &_OverflowInRead_ClassInfo_, allocate$OverflowInRead);
	return class$;
}

$Class* OverflowInRead::class$ = nullptr;
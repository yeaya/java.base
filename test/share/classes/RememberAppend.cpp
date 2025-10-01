#include <RememberAppend.h>

#include <java/io/File.h>
#include <java/io/FileDescriptor.h>
#include <java/io/FileOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileDescriptor = ::java::io::FileDescriptor;
using $FileOutputStream = ::java::io::FileOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;

$FieldInfo _RememberAppend_FieldInfo_[] = {
	{"bytes", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RememberAppend, bytes)},
	{}
};

$MethodInfo _RememberAppend_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RememberAppend::*)()>(&RememberAppend::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&RememberAppend::main)), "java.lang.Throwable"},
	{}
};

$ClassInfo _RememberAppend_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"RememberAppend",
	"java.lang.Object",
	nullptr,
	_RememberAppend_FieldInfo_,
	_RememberAppend_MethodInfo_
};

$Object* allocate$RememberAppend($Class* clazz) {
	return $of($alloc(RememberAppend));
}

$bytes* RememberAppend::bytes = nullptr;

void RememberAppend::init$() {
}

void RememberAppend::main($StringArray* args) {
	$init(RememberAppend);
	$var($File, f, $File::createTempFile("tmp.file"_s, nullptr));
	$nc(f)->deleteOnExit();
	{
		$var($FileOutputStream, fos1, $new($FileOutputStream, $(f->getPath()), true));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					fos1->write(RememberAppend::bytes);
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						fos1->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				fos1->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	{
		$var($FileOutputStream, fos1, $new($FileOutputStream, $(f->getPath()), true));
		{
			$var($Throwable, var$1, nullptr);
			try {
				try {
					$var($FileOutputStream, fos2, $new($FileOutputStream, $(fos1->getFD())));
					{
						$var($Throwable, var$2, nullptr);
						try {
							try {
								fos2->write(RememberAppend::bytes);
							} catch ($Throwable&) {
								$var($Throwable, t$, $catch());
								try {
									fos2->close();
								} catch ($Throwable&) {
									$var($Throwable, x2, $catch());
									t$->addSuppressed(x2);
								}
								$throw(t$);
							}
						} catch ($Throwable&) {
							$assign(var$2, $catch());
						} /*finally*/ {
							fos2->close();
						}
						if (var$2 != nullptr) {
							$throw(var$2);
						}
					}
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						fos1->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$1, $catch());
			} /*finally*/ {
				fos1->close();
			}
			if (var$1 != nullptr) {
				$throw(var$1);
			}
		}
	}
	if (f->length() != 2 * $nc(RememberAppend::bytes)->length) {
		$throwNew($RuntimeException, "Append flag ignored"_s);
	}
}

void clinit$RememberAppend($Class* class$) {
	$assignStatic(RememberAppend::bytes, "ABC "_s->getBytes());
}

RememberAppend::RememberAppend() {
}

$Class* RememberAppend::load$($String* name, bool initialize) {
	$loadClass(RememberAppend, name, initialize, &_RememberAppend_ClassInfo_, clinit$RememberAppend, allocate$RememberAppend);
	return class$;
}

$Class* RememberAppend::class$ = nullptr;
#include <LargeCopyWithMark.h>

#include <MyInputStream4LargeCopyWithMark.h>
#include <MyOutputStream4LargeCopyWithMark.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/FilterInputStream.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef BIS_BUFF_SIZE
#undef BUFF_SIZE
#undef BYTES_TO_COPY

using $MyInputStream4LargeCopyWithMark = ::MyInputStream4LargeCopyWithMark;
using $MyOutputStream4LargeCopyWithMark = ::MyOutputStream4LargeCopyWithMark;
using $BufferedInputStream = ::java::io::BufferedInputStream;
using $FilterInputStream = ::java::io::FilterInputStream;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

$FieldInfo _LargeCopyWithMark_FieldInfo_[] = {
	{"BUFF_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(LargeCopyWithMark, BUFF_SIZE)},
	{"BIS_BUFF_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(LargeCopyWithMark, BIS_BUFF_SIZE)},
	{"BYTES_TO_COPY", "J", nullptr, $STATIC | $FINAL, $constField(LargeCopyWithMark, BYTES_TO_COPY)},
	{}
};

$MethodInfo _LargeCopyWithMark_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LargeCopyWithMark::*)()>(&LargeCopyWithMark::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&LargeCopyWithMark::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _LargeCopyWithMark_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"LargeCopyWithMark",
	"java.lang.Object",
	nullptr,
	_LargeCopyWithMark_FieldInfo_,
	_LargeCopyWithMark_MethodInfo_
};

$Object* allocate$LargeCopyWithMark($Class* clazz) {
	return $of($alloc(LargeCopyWithMark));
}

void LargeCopyWithMark::init$() {
}

void LargeCopyWithMark::main($StringArray* args) {
	$init(LargeCopyWithMark);
	$var($bytes, buff, $new($bytes, LargeCopyWithMark::BUFF_SIZE));
	{
		$var($InputStream, myis, $new($MyInputStream4LargeCopyWithMark, LargeCopyWithMark::BYTES_TO_COPY));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($InputStream, bis, $new($BufferedInputStream, myis, LargeCopyWithMark::BIS_BUFF_SIZE));
					{
						$var($Throwable, var$1, nullptr);
						try {
							try {
								$var($OutputStream, myos, $new($MyOutputStream4LargeCopyWithMark));
								{
									$var($Throwable, var$2, nullptr);
									try {
										try {
											bis->mark(LargeCopyWithMark::BIS_BUFF_SIZE + 100);
											for (;;) {
												int32_t count = bis->read(buff, 0, LargeCopyWithMark::BUFF_SIZE);
												if (count == -1) {
													break;
												}
												myos->write(buff, 0, count);
											}
										} catch ($Throwable&) {
											$var($Throwable, t$, $catch());
											try {
												myos->close();
											} catch ($Throwable&) {
												$var($Throwable, x2, $catch());
												t$->addSuppressed(x2);
											}
											$throw(t$);
										}
									} catch ($Throwable&) {
										$assign(var$2, $catch());
									} /*finally*/ {
										myos->close();
									}
									if (var$2 != nullptr) {
										$throw(var$2);
									}
								}
							} catch ($Throwable&) {
								$var($Throwable, t$, $catch());
								try {
									bis->close();
								} catch ($Throwable&) {
									$var($Throwable, x2, $catch());
									t$->addSuppressed(x2);
								}
								$throw(t$);
							}
						} catch ($Throwable&) {
							$assign(var$1, $catch());
						} /*finally*/ {
							bis->close();
						}
						if (var$1 != nullptr) {
							$throw(var$1);
						}
					}
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						myis->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				myis->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void clinit$LargeCopyWithMark($Class* class$) {
	{
	}
}

LargeCopyWithMark::LargeCopyWithMark() {
}

$Class* LargeCopyWithMark::load$($String* name, bool initialize) {
	$loadClass(LargeCopyWithMark, name, initialize, &_LargeCopyWithMark_ClassInfo_, clinit$LargeCopyWithMark, allocate$LargeCopyWithMark);
	return class$;
}

$Class* LargeCopyWithMark::class$ = nullptr;
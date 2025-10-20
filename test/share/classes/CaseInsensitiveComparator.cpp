#include <CaseInsensitiveComparator.h>

#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Comparator.h>
#include <jcpp.h>

#undef CASE_INSENSITIVE_ORDER

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Comparator = ::java::util::Comparator;

$MethodInfo _CaseInsensitiveComparator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CaseInsensitiveComparator::*)()>(&CaseInsensitiveComparator::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&CaseInsensitiveComparator::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _CaseInsensitiveComparator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"CaseInsensitiveComparator",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CaseInsensitiveComparator_MethodInfo_
};

$Object* allocate$CaseInsensitiveComparator($Class* clazz) {
	return $of($alloc(CaseInsensitiveComparator));
}

void CaseInsensitiveComparator::init$() {
}

void CaseInsensitiveComparator::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Object, result, nullptr);
	{
		$var($ByteArrayOutputStream, outBuffer, $new($ByteArrayOutputStream));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($ObjectOutputStream, out, $new($ObjectOutputStream, outBuffer));
					{
						$var($Throwable, var$1, nullptr);
						try {
							try {
								$init($String);
								out->writeObject($String::CASE_INSENSITIVE_ORDER);
								out->close();
								{
									$var($ByteArrayInputStream, inBuffer, $new($ByteArrayInputStream, $(outBuffer->toByteArray())));
									{
										$var($Throwable, var$2, nullptr);
										try {
											try {
												$var($ObjectInputStream, in, $new($ObjectInputStream, inBuffer));
												{
													$var($Throwable, var$3, nullptr);
													try {
														try {
															$assign(result, in->readObject());
														} catch ($Throwable&) {
															$var($Throwable, t$, $catch());
															try {
																in->close();
															} catch ($Throwable&) {
																$var($Throwable, x2, $catch());
																t$->addSuppressed(x2);
															}
															$throw(t$);
														}
													} catch ($Throwable&) {
														$assign(var$3, $catch());
													} /*finally*/ {
														in->close();
													}
													if (var$3 != nullptr) {
														$throw(var$3);
													}
												}
											} catch ($Throwable&) {
												$var($Throwable, t$, $catch());
												try {
													inBuffer->close();
												} catch ($Throwable&) {
													$var($Throwable, x2, $catch());
													t$->addSuppressed(x2);
												}
												$throw(t$);
											}
										} catch ($Throwable&) {
											$assign(var$2, $catch());
										} /*finally*/ {
											inBuffer->close();
										}
										if (var$2 != nullptr) {
											$throw(var$2);
										}
									}
								}
							} catch ($Throwable&) {
								$var($Throwable, t$, $catch());
								try {
									out->close();
								} catch ($Throwable&) {
									$var($Throwable, x2, $catch());
									t$->addSuppressed(x2);
								}
								$throw(t$);
							}
						} catch ($Throwable&) {
							$assign(var$1, $catch());
						} /*finally*/ {
							out->close();
						}
						if (var$1 != nullptr) {
							$throw(var$1);
						}
					}
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						outBuffer->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				outBuffer->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	$init($String);
	if (!$nc($String::CASE_INSENSITIVE_ORDER)->equals(result)) {
		$throwNew($Exception, "Value restored from serial form does not equal original!"_s);
	}
	if (!$nc($of(result))->equals($String::CASE_INSENSITIVE_ORDER)) {
		$throwNew($Exception, "Value restored from serial form does not equal original!"_s);
	}
	if (!$equals($String::CASE_INSENSITIVE_ORDER, result)) {
		$throwNew($Exception, "Value restored from serial form does not equal original!"_s);
	}
}

CaseInsensitiveComparator::CaseInsensitiveComparator() {
}

$Class* CaseInsensitiveComparator::load$($String* name, bool initialize) {
	$loadClass(CaseInsensitiveComparator, name, initialize, &_CaseInsensitiveComparator_ClassInfo_, allocate$CaseInsensitiveComparator);
	return class$;
}

$Class* CaseInsensitiveComparator::class$ = nullptr;
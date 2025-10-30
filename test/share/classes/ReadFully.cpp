#include <ReadFully.h>

#include <java/io/DataInputStream.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/InputStream.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <jcpp.h>

using $DataInputStream = ::java::io::DataInputStream;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FilterInputStream = ::java::io::FilterInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _ReadFully_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ReadFully::*)()>(&ReadFully::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<void(*)($StringArray*)>(&ReadFully::main)), "java.lang.Exception"},
	{"testBigOffsetLength1", "()V", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<void(*)()>(&ReadFully::testBigOffsetLength1)), "java.lang.Exception"},
	{"testBigOffsetLength2", "()V", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<void(*)()>(&ReadFully::testBigOffsetLength2)), "java.lang.Exception"},
	{"testBigOffsetLength3", "()V", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<void(*)()>(&ReadFully::testBigOffsetLength3)), "java.lang.Exception"},
	{"testBigOffsetLength4", "()V", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<void(*)()>(&ReadFully::testBigOffsetLength4)), "java.lang.Exception"},
	{"testNegativeLength", "()V", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<void(*)()>(&ReadFully::testNegativeLength)), "java.lang.Exception"},
	{"testNegativeOffset", "()V", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<void(*)()>(&ReadFully::testNegativeOffset)), "java.lang.Exception"},
	{"testNegativeOffsetZeroLength", "()V", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<void(*)()>(&ReadFully::testNegativeOffsetZeroLength)), "java.lang.Exception"},
	{}
};

$ClassInfo _ReadFully_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ReadFully",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ReadFully_MethodInfo_
};

$Object* allocate$ReadFully($Class* clazz) {
	return $of($alloc(ReadFully));
}

void ReadFully::init$() {
}

void ReadFully::testNegativeOffset() {
	$useLocalCurrentObjectStackCache();
	$var($File, file, $new($File, $($System::getProperty("test.src"_s)), "ReadFully.java"_s));
	try {
		$var($FileInputStream, in, $new($FileInputStream, file));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($DataInputStream, dis, $new($DataInputStream, in));
					{
						$var($Throwable, var$1, nullptr);
						try {
							try {
								$var($bytes, buffer, $new($bytes, 100));
								dis->readFully(buffer, -1, buffer->length);
								$throwNew($RuntimeException, "Test testNegativeOffset() failed"_s);
							} catch ($Throwable& t$) {
								try {
									dis->close();
								} catch ($Throwable& x2) {
									t$->addSuppressed(x2);
								}
								$throw(t$);
							}
						} catch ($Throwable& var$2) {
							$assign(var$1, var$2);
						} /*finally*/ {
							dis->close();
						}
						if (var$1 != nullptr) {
							$throw(var$1);
						}
					}
				} catch ($Throwable& t$) {
					try {
						in->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} /*finally*/ {
				in->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($IndexOutOfBoundsException& ignore) {
	}
}

void ReadFully::testNegativeLength() {
	$useLocalCurrentObjectStackCache();
	$var($File, file, $new($File, $($System::getProperty("test.src"_s)), "ReadFully.java"_s));
	try {
		$var($FileInputStream, in, $new($FileInputStream, file));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($DataInputStream, dis, $new($DataInputStream, in));
					{
						$var($Throwable, var$1, nullptr);
						try {
							try {
								$var($bytes, buffer, $new($bytes, 100));
								dis->readFully(buffer, 0, -1);
								$throwNew($RuntimeException, "Test testNegativeLength() failed"_s);
							} catch ($Throwable& t$) {
								try {
									dis->close();
								} catch ($Throwable& x2) {
									t$->addSuppressed(x2);
								}
								$throw(t$);
							}
						} catch ($Throwable& var$2) {
							$assign(var$1, var$2);
						} /*finally*/ {
							dis->close();
						}
						if (var$1 != nullptr) {
							$throw(var$1);
						}
					}
				} catch ($Throwable& t$) {
					try {
						in->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} /*finally*/ {
				in->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($IndexOutOfBoundsException& ignore) {
	}
}

void ReadFully::testNegativeOffsetZeroLength() {
	$useLocalCurrentObjectStackCache();
	$var($File, file, $new($File, $($System::getProperty("test.src"_s)), "ReadFully.java"_s));
	try {
		$var($FileInputStream, in, $new($FileInputStream, file));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($DataInputStream, dis, $new($DataInputStream, in));
					{
						$var($Throwable, var$1, nullptr);
						try {
							try {
								$var($bytes, buffer, $new($bytes, 100));
								dis->readFully(buffer, -1, 0);
								$throwNew($RuntimeException, "Test testNegativeOffsetZeroLength() failed"_s);
							} catch ($Throwable& t$) {
								try {
									dis->close();
								} catch ($Throwable& x2) {
									t$->addSuppressed(x2);
								}
								$throw(t$);
							}
						} catch ($Throwable& var$2) {
							$assign(var$1, var$2);
						} /*finally*/ {
							dis->close();
						}
						if (var$1 != nullptr) {
							$throw(var$1);
						}
					}
				} catch ($Throwable& t$) {
					try {
						in->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} /*finally*/ {
				in->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($IndexOutOfBoundsException& ignore) {
	}
}

void ReadFully::testBigOffsetLength1() {
	$useLocalCurrentObjectStackCache();
	$var($File, file, $new($File, $($System::getProperty("test.src"_s)), "ReadFully.java"_s));
	try {
		$var($FileInputStream, in, $new($FileInputStream, file));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($DataInputStream, dis, $new($DataInputStream, in));
					{
						$var($Throwable, var$1, nullptr);
						try {
							try {
								$var($bytes, buffer, $new($bytes, 100));
								dis->readFully(buffer, 0, buffer->length + 1);
								$throwNew($RuntimeException, "Test testBigOffsetLength1() failed"_s);
							} catch ($Throwable& t$) {
								try {
									dis->close();
								} catch ($Throwable& x2) {
									t$->addSuppressed(x2);
								}
								$throw(t$);
							}
						} catch ($Throwable& var$2) {
							$assign(var$1, var$2);
						} /*finally*/ {
							dis->close();
						}
						if (var$1 != nullptr) {
							$throw(var$1);
						}
					}
				} catch ($Throwable& t$) {
					try {
						in->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} /*finally*/ {
				in->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($IndexOutOfBoundsException& ignore) {
	}
}

void ReadFully::testBigOffsetLength2() {
	$useLocalCurrentObjectStackCache();
	$var($File, file, $new($File, $($System::getProperty("test.src"_s)), "ReadFully.java"_s));
	try {
		$var($FileInputStream, in, $new($FileInputStream, file));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($DataInputStream, dis, $new($DataInputStream, in));
					{
						$var($Throwable, var$1, nullptr);
						try {
							try {
								$var($bytes, buffer, $new($bytes, 100));
								dis->readFully(buffer, 1, buffer->length);
								$throwNew($RuntimeException, "Test testBigOffsetLength2() failed"_s);
							} catch ($Throwable& t$) {
								try {
									dis->close();
								} catch ($Throwable& x2) {
									t$->addSuppressed(x2);
								}
								$throw(t$);
							}
						} catch ($Throwable& var$2) {
							$assign(var$1, var$2);
						} /*finally*/ {
							dis->close();
						}
						if (var$1 != nullptr) {
							$throw(var$1);
						}
					}
				} catch ($Throwable& t$) {
					try {
						in->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} /*finally*/ {
				in->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($IndexOutOfBoundsException& ignore) {
	}
}

void ReadFully::testBigOffsetLength3() {
	$useLocalCurrentObjectStackCache();
	$var($File, file, $new($File, $($System::getProperty("test.src"_s)), "ReadFully.java"_s));
	try {
		$var($FileInputStream, in, $new($FileInputStream, file));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($DataInputStream, dis, $new($DataInputStream, in));
					{
						$var($Throwable, var$1, nullptr);
						try {
							try {
								$var($bytes, buffer, $new($bytes, 100));
								dis->readFully(buffer, buffer->length, 1);
								$throwNew($RuntimeException, "Test testBigOffsetLength3() failed"_s);
							} catch ($Throwable& t$) {
								try {
									dis->close();
								} catch ($Throwable& x2) {
									t$->addSuppressed(x2);
								}
								$throw(t$);
							}
						} catch ($Throwable& var$2) {
							$assign(var$1, var$2);
						} /*finally*/ {
							dis->close();
						}
						if (var$1 != nullptr) {
							$throw(var$1);
						}
					}
				} catch ($Throwable& t$) {
					try {
						in->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} /*finally*/ {
				in->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($IndexOutOfBoundsException& ignore) {
	}
}

void ReadFully::testBigOffsetLength4() {
	$useLocalCurrentObjectStackCache();
	$var($File, file, $new($File, $($System::getProperty("test.src"_s)), "ReadFully.java"_s));
	try {
		$var($FileInputStream, in, $new($FileInputStream, file));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($DataInputStream, dis, $new($DataInputStream, in));
					{
						$var($Throwable, var$1, nullptr);
						try {
							try {
								$var($bytes, buffer, $new($bytes, 100));
								dis->readFully(buffer, buffer->length + 1, 0);
								$throwNew($RuntimeException, "Test testBigOffsetLength4() failed"_s);
							} catch ($Throwable& t$) {
								try {
									dis->close();
								} catch ($Throwable& x2) {
									t$->addSuppressed(x2);
								}
								$throw(t$);
							}
						} catch ($Throwable& var$2) {
							$assign(var$1, var$2);
						} /*finally*/ {
							dis->close();
						}
						if (var$1 != nullptr) {
							$throw(var$1);
						}
					}
				} catch ($Throwable& t$) {
					try {
						in->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} /*finally*/ {
				in->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($IndexOutOfBoundsException& ignore) {
	}
}

void ReadFully::main($StringArray* args) {
	testNegativeOffset();
	testNegativeLength();
	testNegativeOffsetZeroLength();
	testBigOffsetLength1();
	testBigOffsetLength2();
	testBigOffsetLength3();
	testBigOffsetLength4();
}

ReadFully::ReadFully() {
}

$Class* ReadFully::load$($String* name, bool initialize) {
	$loadClass(ReadFully, name, initialize, &_ReadFully_ClassInfo_, allocate$ReadFully);
	return class$;
}

$Class* ReadFully::class$ = nullptr;
#include <sun/net/www/http/HttpCapture.h>
#include <java/io/BufferedReader.h>
#include <java/io/BufferedWriter.h>
#include <java/io/File.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/FileReader.h>
#include <java/io/FileWriter.h>
#include <java/io/IOException.h>
#include <java/lang/CharSequence.h>
#include <java/net/URL.h>
#include <java/security/AccessController.h>
#include <java/util/ArrayList.h>
#include <java/util/Random.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <sun/net/www/http/HttpCapture$1.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

using $BufferedReader = ::java::io::BufferedReader;
using $BufferedWriter = ::java::io::BufferedWriter;
using $File = ::java::io::File;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $FileReader = ::java::io::FileReader;
using $FileWriter = ::java::io::FileWriter;
using $IOException = ::java::io::IOException;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $AccessController = ::java::security::AccessController;
using $ArrayList = ::java::util::ArrayList;
using $Random = ::java::util::Random;
using $Pattern = ::java::util::regex::Pattern;
using $HttpCapture$1 = ::sun::net::www::http::HttpCapture$1;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace net {
		namespace www {
			namespace http {

bool HttpCapture::initialized = false;
$volatile($ArrayList*) HttpCapture::patterns = nullptr;
$volatile($ArrayList*) HttpCapture::capFiles = nullptr;

void HttpCapture::init() {
	$load(HttpCapture);
	$synchronized(class$) {
		$useLocalObjectStack();
		$beforeCallerSensitive();
		$init(HttpCapture);
		HttpCapture::initialized = true;
		$var($String, rulesFile, $cast($String, $AccessController::doPrivileged($$new($HttpCapture$1))));
		if (rulesFile != nullptr && !rulesFile->isEmpty()) {
			$var($BufferedReader, in, nullptr);
			try {
				$assign(in, $new($BufferedReader, $$new($FileReader, rulesFile)));
			} catch ($FileNotFoundException& ex) {
				return;
			}
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($String, line, $nc(in)->readLine());
					while (line != nullptr) {
						$assign(line, line->trim());
						if (!line->startsWith("#"_s)) {
							$var($StringArray, s, line->split(","_s));
							if (s->length == 2) {
								if (HttpCapture::patterns == nullptr) {
									$assignStatic(HttpCapture::patterns, $new($ArrayList));
									$assignStatic(HttpCapture::capFiles, $new($ArrayList));
								}
								$nc(HttpCapture::patterns)->add($($Pattern::compile($($nc(s->get(0))->trim()))));
								$nc(HttpCapture::capFiles)->add($($nc(s->get(1))->trim()));
							}
						}
						$assign(line, in->readLine());
					}
				} catch ($IOException& ioe) {
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				try {
					$nc(in)->close();
				} catch ($IOException& ex) {
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

bool HttpCapture::isInitialized() {
	$load(HttpCapture);
	$synchronized(class$) {
		$init(HttpCapture);
		return HttpCapture::initialized;
	}
}

void HttpCapture::init$($File* f, $URL* url) {
	$useLocalObjectStack();
	this->incoming = true;
	$set(this, file, f);
	try {
		$set(this, out, $new($BufferedWriter, $$new($FileWriter, this->file, true)));
		this->out->write($$str({"URL: "_s, url, "\n"_s}));
	} catch ($IOException& ex) {
		$$nc($PlatformLogger::getLogger($(HttpCapture::class$->getName())))->severe(nullptr, ex);
	}
}

void HttpCapture::sent(int32_t c) {
	$synchronized(this) {
		if (this->incoming) {
			$nc(this->out)->write("\n------>\n"_s);
			this->incoming = false;
			this->out->flush();
		}
		$nc(this->out)->write(c);
	}
}

void HttpCapture::received(int32_t c) {
	$synchronized(this) {
		if (!this->incoming) {
			$nc(this->out)->write("\n<------\n"_s);
			this->incoming = true;
			this->out->flush();
		}
		$nc(this->out)->write(c);
	}
}

void HttpCapture::flush() {
	$synchronized(this) {
		$nc(this->out)->flush();
	}
}

HttpCapture* HttpCapture::getCapture($URL* url) {
	$useLocalObjectStack();
	if (!isInitialized()) {
		init();
	}
	$init(HttpCapture);
	if (HttpCapture::patterns == nullptr || $nc(HttpCapture::patterns)->isEmpty()) {
		return nullptr;
	}
	$var($String, s, $nc(url)->toString());
	for (int32_t i = 0; i < $nc(HttpCapture::patterns)->size(); ++i) {
		$var($Pattern, p, $cast($Pattern, $nc(HttpCapture::patterns)->get(i)));
		if ($$nc($nc(p)->matcher(s))->find()) {
			$var($String, f, $cast($String, $nc(HttpCapture::capFiles)->get(i)));
			$var($File, fi, nullptr);
			if ($nc(f)->indexOf("%d"_s) >= 0) {
				$var($Random, rand, $new($Random));
				do {
					$var($String, f2, f->replace("%d"_s, $($Integer::toString(rand->nextInt()))));
					$assign(fi, $new($File, f2));
				} while ($nc(fi)->exists());
			} else {
				$assign(fi, $new($File, f));
			}
			return $new(HttpCapture, fi, url);
		}
	}
	return nullptr;
}

HttpCapture::HttpCapture() {
}

$Class* HttpCapture::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"file", "Ljava/io/File;", nullptr, $PRIVATE, $field(HttpCapture, file)},
		{"incoming", "Z", nullptr, $PRIVATE, $field(HttpCapture, incoming)},
		{"out", "Ljava/io/BufferedWriter;", nullptr, $PRIVATE, $field(HttpCapture, out)},
		{"initialized", "Z", nullptr, $PRIVATE | $STATIC, $staticField(HttpCapture, initialized)},
		{"patterns", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/util/regex/Pattern;>;", $PRIVATE | $STATIC | $VOLATILE, $staticField(HttpCapture, patterns)},
		{"capFiles", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/lang/String;>;", $PRIVATE | $STATIC | $VOLATILE, $staticField(HttpCapture, capFiles)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/File;Ljava/net/URL;)V", nullptr, $PRIVATE, $method(HttpCapture, init$, void, $File*, $URL*)},
		{"flush", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(HttpCapture, flush, void), "java.io.IOException"},
		{"getCapture", "(Ljava/net/URL;)Lsun/net/www/http/HttpCapture;", nullptr, $PUBLIC | $STATIC, $staticMethod(HttpCapture, getCapture, HttpCapture*, $URL*)},
		{"init", "()V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $staticMethod(HttpCapture, init, void)},
		{"isInitialized", "()Z", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $staticMethod(HttpCapture, isInitialized, bool)},
		{"received", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(HttpCapture, received, void, int32_t), "java.io.IOException"},
		{"sent", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(HttpCapture, sent, void, int32_t), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.www.http.HttpCapture$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.net.www.http.HttpCapture",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.net.www.http.HttpCapture$1"
	};
	$loadClass(HttpCapture, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpCapture);
	});
	return class$;
}

$Class* HttpCapture::class$ = nullptr;

			} // http
		} // www
	} // net
} // sun
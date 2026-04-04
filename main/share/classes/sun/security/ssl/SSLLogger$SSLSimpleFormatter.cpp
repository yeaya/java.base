#include <sun/security/ssl/SSLLogger$SSLSimpleFormatter.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/StackWalker$StackFrame.h>
#include <java/lang/StackWalker.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/math/BigInteger.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/PublicKey.h>
#include <java/security/cert/Certificate.h>
#include <java/security/cert/Extension.h>
#include <java/security/cert/X509Certificate.h>
#include <java/text/MessageFormat.h>
#include <java/time/Instant.h>
#include <java/time/ZoneId.h>
#include <java/time/format/DateTimeFormatter.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/util/Collection.h>
#include <java/util/Date.h>
#include <java/util/HexFormat.h>
#include <java/util/Iterator.h>
#include <java/util/Locale.h>
#include <java/util/Map$Entry.h>
#include <java/util/Optional.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <sun/security/ssl/SSLLogger$SSLConsoleLogger.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/Utilities.h>
#include <sun/security/util/HexDumpEncoder.h>
#include <sun/security/x509/CertificateExtensions.h>
#include <sun/security/x509/X509CertImpl.h>
#include <sun/security/x509/X509CertInfo.h>
#include <jcpp.h>

#undef ENGLISH
#undef EXTENSIONS
#undef INFO
#undef NAME
#undef PATTERN

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackWalker = ::java::lang::StackWalker;
using $StackWalker$StackFrame = ::java::lang::StackWalker$StackFrame;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Certificate = ::java::security::cert::Certificate;
using $Extension = ::java::security::cert::Extension;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $MessageFormat = ::java::text::MessageFormat;
using $Instant = ::java::time::Instant;
using $ZoneId = ::java::time::ZoneId;
using $DateTimeFormatter = ::java::time::format::DateTimeFormatter;
using $HexFormat = ::java::util::HexFormat;
using $Iterator = ::java::util::Iterator;
using $Locale = ::java::util::Locale;
using $Map$Entry = ::java::util::Map$Entry;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;
using $SSLLogger$SSLConsoleLogger = ::sun::security::ssl::SSLLogger$SSLConsoleLogger;
using $Utilities = ::sun::security::ssl::Utilities;
using $HexDumpEncoder = ::sun::security::util::HexDumpEncoder;
using $CertificateExtensions = ::sun::security::x509::CertificateExtensions;
using $X509CertImpl = ::sun::security::x509::X509CertImpl;
using $X509CertInfo = ::sun::security::x509::X509CertInfo;

namespace sun {
	namespace security {
		namespace ssl {

class SSLLogger$SSLSimpleFormatter$$Lambda$lambda$formatCaller$2 : public $Function {
	$class(SSLLogger$SSLSimpleFormatter$$Lambda$lambda$formatCaller$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		 return $of(SSLLogger$SSLSimpleFormatter::lambda$formatCaller$2($cast($Stream, s)));
	}
};
$Class* SSLLogger$SSLSimpleFormatter$$Lambda$lambda$formatCaller$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SSLLogger$SSLSimpleFormatter$$Lambda$lambda$formatCaller$2, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SSLLogger$SSLSimpleFormatter$$Lambda$lambda$formatCaller$2, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.security.ssl.SSLLogger$SSLSimpleFormatter$$Lambda$lambda$formatCaller$2",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(SSLLogger$SSLSimpleFormatter$$Lambda$lambda$formatCaller$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLLogger$SSLSimpleFormatter$$Lambda$lambda$formatCaller$2);
	});
	return class$;
}
$Class* SSLLogger$SSLSimpleFormatter$$Lambda$lambda$formatCaller$2::class$ = nullptr;

class SSLLogger$SSLSimpleFormatter$$Lambda$lambda$formatCaller$0$1 : public $Predicate {
	$class(SSLLogger$SSLSimpleFormatter$$Lambda$lambda$formatCaller$0$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* f) override {
		 return SSLLogger$SSLSimpleFormatter::lambda$formatCaller$0($cast($StackWalker$StackFrame, f));
	}
};
$Class* SSLLogger$SSLSimpleFormatter$$Lambda$lambda$formatCaller$0$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SSLLogger$SSLSimpleFormatter$$Lambda$lambda$formatCaller$0$1, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(SSLLogger$SSLSimpleFormatter$$Lambda$lambda$formatCaller$0$1, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.security.ssl.SSLLogger$SSLSimpleFormatter$$Lambda$lambda$formatCaller$0$1",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(SSLLogger$SSLSimpleFormatter$$Lambda$lambda$formatCaller$0$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLLogger$SSLSimpleFormatter$$Lambda$lambda$formatCaller$0$1);
	});
	return class$;
}
$Class* SSLLogger$SSLSimpleFormatter$$Lambda$lambda$formatCaller$0$1::class$ = nullptr;

class SSLLogger$SSLSimpleFormatter$$Lambda$lambda$formatCaller$1$2 : public $Function {
	$class(SSLLogger$SSLSimpleFormatter$$Lambda$lambda$formatCaller$1$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* f) override {
		 return $of(SSLLogger$SSLSimpleFormatter::lambda$formatCaller$1($cast($StackWalker$StackFrame, f)));
	}
};
$Class* SSLLogger$SSLSimpleFormatter$$Lambda$lambda$formatCaller$1$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SSLLogger$SSLSimpleFormatter$$Lambda$lambda$formatCaller$1$2, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SSLLogger$SSLSimpleFormatter$$Lambda$lambda$formatCaller$1$2, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.security.ssl.SSLLogger$SSLSimpleFormatter$$Lambda$lambda$formatCaller$1$2",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(SSLLogger$SSLSimpleFormatter$$Lambda$lambda$formatCaller$1$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLLogger$SSLSimpleFormatter$$Lambda$lambda$formatCaller$1$2);
	});
	return class$;
}
$Class* SSLLogger$SSLSimpleFormatter$$Lambda$lambda$formatCaller$1$2::class$ = nullptr;

$String* SSLLogger$SSLSimpleFormatter::PATTERN = nullptr;
$DateTimeFormatter* SSLLogger$SSLSimpleFormatter::dateTimeFormat = nullptr;
$MessageFormat* SSLLogger$SSLSimpleFormatter::basicCertFormat = nullptr;
$MessageFormat* SSLLogger$SSLSimpleFormatter::extendedCertFormart = nullptr;
$MessageFormat* SSLLogger$SSLSimpleFormatter::messageFormatNoParas = nullptr;
$MessageFormat* SSLLogger$SSLSimpleFormatter::messageCompactFormatNoParas = nullptr;
$MessageFormat* SSLLogger$SSLSimpleFormatter::messageFormatWithParas = nullptr;
$MessageFormat* SSLLogger$SSLSimpleFormatter::messageCompactFormatWithParas = nullptr;
$MessageFormat* SSLLogger$SSLSimpleFormatter::keyObjectFormat = nullptr;

void SSLLogger$SSLSimpleFormatter::init$() {
}

$String* SSLLogger$SSLSimpleFormatter::format($SSLLogger$SSLConsoleLogger* logger, $System$Logger$Level* level, $String* message, $ObjectArray* parameters) {
	$init(SSLLogger$SSLSimpleFormatter);
	$useLocalObjectStack();
	if (parameters == nullptr || parameters->length == 0) {
		$var($ObjectArray, messageFields, $new($ObjectArray, {
			$nc(logger)->loggerName,
			$($nc(level)->getName()),
			$($Utilities::toHexString($($Thread::currentThread())->getId())),
			$($($Thread::currentThread())->getName()),
			$($nc(SSLLogger$SSLSimpleFormatter::dateTimeFormat)->format($($Instant::now()))),
			$(formatCaller()),
			message
		}));
		if (logger->useCompactFormat) {
			return SSLLogger$SSLSimpleFormatter::messageCompactFormatNoParas->format(messageFields);
		} else {
			return SSLLogger$SSLSimpleFormatter::messageFormatNoParas->format(messageFields);
		}
	}
	$var($ObjectArray, messageFields, $new($ObjectArray, {
		$nc(logger)->loggerName,
		$($nc(level)->getName()),
		$($Utilities::toHexString($($Thread::currentThread())->getId())),
		$($($Thread::currentThread())->getName()),
		$($nc(SSLLogger$SSLSimpleFormatter::dateTimeFormat)->format($($Instant::now()))),
		$(formatCaller()),
		message,
		($nc(logger)->useCompactFormat ? $(formatParameters(parameters)) : $($Utilities::indent($(formatParameters(parameters)))))
	}));
	if (logger->useCompactFormat) {
		return SSLLogger$SSLSimpleFormatter::messageCompactFormatWithParas->format(messageFields);
	} else {
		return SSLLogger$SSLSimpleFormatter::messageFormatWithParas->format(messageFields);
	}
}

$String* SSLLogger$SSLSimpleFormatter::formatCaller() {
	$init(SSLLogger$SSLSimpleFormatter);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	return $cast($String, $$nc($StackWalker::getInstance())->walk($$new(SSLLogger$SSLSimpleFormatter$$Lambda$lambda$formatCaller$2)));
}

$String* SSLLogger$SSLSimpleFormatter::formatParameters($ObjectArray* parameters) {
	$init(SSLLogger$SSLSimpleFormatter);
	$useLocalObjectStack();
	$var($StringBuilder, builder, $new($StringBuilder, 512));
	bool isFirst = true;
	{
		$var($ObjectArray, arr$, parameters);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Object0, parameter, arr$->get(i$));
			{
				if (isFirst) {
					isFirst = false;
				} else {
					builder->append(",\n"_s);
				}
				if ($instanceOf($Throwable, parameter)) {
					builder->append($(formatThrowable($cast($Throwable, parameter))));
				} else if ($instanceOf($Certificate, parameter)) {
					builder->append($(formatCertificate($cast($Certificate, parameter))));
				} else if ($instanceOf($ByteArrayInputStream, parameter)) {
					builder->append($(formatByteArrayInputStream($cast($ByteArrayInputStream, parameter))));
				} else if ($instanceOf($ByteBuffer, parameter)) {
					builder->append($(formatByteBuffer($cast($ByteBuffer, parameter))));
				} else if ($instanceOf($bytes, parameter)) {
					builder->append($(formatByteArrayInputStream($$new($ByteArrayInputStream, $cast($bytes, parameter)))));
				} else if ($instanceOf($Map$Entry, parameter)) {
					$var($Map$Entry, mapParameter, $cast($Map$Entry, parameter));
					builder->append($(formatMapEntry(mapParameter)));
				} else {
					builder->append($(formatObject(parameter)));
				}
			}
		}
	}
	return builder->toString();
}

$String* SSLLogger$SSLSimpleFormatter::formatThrowable($Throwable* throwable) {
	$init(SSLLogger$SSLSimpleFormatter);
	$useLocalObjectStack();
	$var($StringBuilder, builder, $new($StringBuilder, 512));
	$var($ByteArrayOutputStream, bytesOut, $new($ByteArrayOutputStream));
	{
		$var($PrintStream, out, $new($PrintStream, bytesOut));
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(throwable)->printStackTrace(out);
				builder->append($($Utilities::indent($(bytesOut->toString()))));
			} catch ($Throwable& t$) {
				try {
					out->close();
				} catch ($Throwable& x2) {
					t$->addSuppressed(x2);
				}
				$throw(t$);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			out->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$var($ObjectArray, fields, $new($ObjectArray, {
		"throwable"_s,
		$(builder->toString())
	}));
	return SSLLogger$SSLSimpleFormatter::keyObjectFormat->format(fields);
}

$String* SSLLogger$SSLSimpleFormatter::formatCertificate($Certificate* certificate) {
	$init(SSLLogger$SSLSimpleFormatter);
	$useLocalObjectStack();
	if (!($instanceOf($X509Certificate, certificate))) {
		return $Utilities::indent($($nc(certificate)->toString()));
	}
	$var($StringBuilder, builder, $new($StringBuilder, 512));
	try {
		$var($X509CertImpl, x509, $X509CertImpl::toImpl($cast($X509Certificate, certificate)));
		$var($X509CertInfo, certInfo, $cast($X509CertInfo, $nc(x509)->get($$str({$X509CertImpl::NAME, "."_s, $X509CertImpl::INFO}))));
		$init($X509CertInfo);
		$var($CertificateExtensions, certExts, $cast($CertificateExtensions, $nc(certInfo)->get($X509CertInfo::EXTENSIONS)));
		if (certExts == nullptr) {
			$var($ObjectArray, certFields, $new($ObjectArray, {
				$($Integer::valueOf(x509->getVersion())),
				$($Utilities::toHexString($($$nc(x509->getSerialNumber())->toByteArray()))),
				$(x509->getSigAlgName()),
				$($$nc(x509->getIssuerX500Principal())->toString()),
				$($nc(SSLLogger$SSLSimpleFormatter::dateTimeFormat)->format($($$nc(x509->getNotBefore())->toInstant()))),
				$($nc(SSLLogger$SSLSimpleFormatter::dateTimeFormat)->format($($$nc(x509->getNotAfter())->toInstant()))),
				$($$nc(x509->getSubjectX500Principal())->toString()),
				$($$nc(x509->getPublicKey())->getAlgorithm())
			}));
			builder->append($($Utilities::indent($(SSLLogger$SSLSimpleFormatter::basicCertFormat->format(certFields)))));
		} else {
			$var($StringBuilder, extBuilder, $new($StringBuilder, 512));
			bool isFirst = true;
			{
				$var($Iterator, i$, $$nc(certExts->getAllExtensions())->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Extension, certExt, $cast($Extension, i$->next()));
					{
						if (isFirst) {
							isFirst = false;
						} else {
							extBuilder->append(",\n"_s);
						}
						extBuilder->append($$str({"{\n"_s, $($Utilities::indent($($nc(certExt)->toString()))), "\n}"_s}));
					}
				}
			}
			$var($ObjectArray, certFields, $new($ObjectArray, {
				$($Integer::valueOf(x509->getVersion())),
				$($Utilities::toHexString($($$nc(x509->getSerialNumber())->toByteArray()))),
				$(x509->getSigAlgName()),
				$($$nc(x509->getIssuerX500Principal())->toString()),
				$($nc(SSLLogger$SSLSimpleFormatter::dateTimeFormat)->format($($$nc(x509->getNotBefore())->toInstant()))),
				$($nc(SSLLogger$SSLSimpleFormatter::dateTimeFormat)->format($($$nc(x509->getNotAfter())->toInstant()))),
				$($$nc(x509->getSubjectX500Principal())->toString()),
				$($$nc(x509->getPublicKey())->getAlgorithm()),
				$($Utilities::indent($(extBuilder->toString())))
			}));
			builder->append($($Utilities::indent($(SSLLogger$SSLSimpleFormatter::extendedCertFormart->format(certFields)))));
		}
	} catch ($Exception& ce) {
	}
	$var($ObjectArray, fields, $new($ObjectArray, {
		"certificate"_s,
		$(builder->toString())
	}));
	return $Utilities::indent($(SSLLogger$SSLSimpleFormatter::keyObjectFormat->format(fields)));
}

$String* SSLLogger$SSLSimpleFormatter::formatByteArrayInputStream($ByteArrayInputStream* bytes) {
	$init(SSLLogger$SSLSimpleFormatter);
	$useLocalObjectStack();
	$var($StringBuilder, builder, $new($StringBuilder, 512));
	try {
		$var($ByteArrayOutputStream, bytesOut, $new($ByteArrayOutputStream));
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$var($HexDumpEncoder, hexEncoder, $new($HexDumpEncoder));
				hexEncoder->encodeBuffer(bytes, bytesOut);
				builder->append($($Utilities::indent($(bytesOut->toString()))));
			} catch ($Throwable& t$) {
				try {
					bytesOut->close();
				} catch ($Throwable& x2) {
					t$->addSuppressed(x2);
				}
				$throw(t$);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			bytesOut->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	} catch ($IOException& ioe) {
	}
	return builder->toString();
}

$String* SSLLogger$SSLSimpleFormatter::formatByteBuffer($ByteBuffer* byteBuffer) {
	$init(SSLLogger$SSLSimpleFormatter);
	$useLocalObjectStack();
	$var($StringBuilder, builder, $new($StringBuilder, 512));
	try {
		$var($ByteArrayOutputStream, bytesOut, $new($ByteArrayOutputStream));
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$var($HexDumpEncoder, hexEncoder, $new($HexDumpEncoder));
				hexEncoder->encodeBuffer($($nc(byteBuffer)->duplicate()), bytesOut);
				builder->append($($Utilities::indent($(bytesOut->toString()))));
			} catch ($Throwable& t$) {
				try {
					bytesOut->close();
				} catch ($Throwable& x2) {
					t$->addSuppressed(x2);
				}
				$throw(t$);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			bytesOut->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	} catch ($IOException& ioe) {
	}
	return builder->toString();
}

$String* SSLLogger$SSLSimpleFormatter::formatMapEntry($Map$Entry* entry) {
	$init(SSLLogger$SSLSimpleFormatter);
	$useLocalObjectStack();
	$var($String, key, $cast($String, $nc(entry)->getKey()));
	$var($Object, value, entry->getValue());
	$var($String, formatted, nullptr);
	if ($instanceOf($String, value)) {
		$assign(formatted, $str({"\""_s, key, "\": \""_s, $cast($String, value), "\""_s}));
	} else if ($instanceOf($StringArray, value)) {
		$var($StringBuilder, builder, $new($StringBuilder, 512));
		$var($StringArray, strings, $cast($StringArray, value));
		builder->append($$str({"\""_s, key, "\": [\n"_s}));
		{
			$var($StringArray, arr$, strings);
			for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
				$var($String, string, arr$->get(i$));
				{
					builder->append($$str({"      \""_s, string, "\""_s}));
					if (string != strings->get(strings->length - 1)) {
						builder->append(","_s);
					}
					builder->append("\n"_s);
				}
			}
		}
		builder->append("      ]"_s);
		$assign(formatted, builder->toString());
	} else if ($instanceOf($bytes, value)) {
		$assign(formatted, $str({"\""_s, key, "\": \""_s, $($Utilities::toHexString($cast($bytes, value))), "\""_s}));
	} else if ($instanceOf($Byte, value)) {
		$assign(formatted, $str({"\""_s, key, "\": \""_s, $($$nc($HexFormat::of())->toHexDigits($cast($Byte, value)->byteValue())), "\""_s}));
	} else {
		$assign(formatted, $str({"\""_s, key, "\": \""_s, $($nc(value)->toString()), "\""_s}));
	}
	return $Utilities::indent(formatted);
}

$String* SSLLogger$SSLSimpleFormatter::formatObject(Object$* obj) {
	$init(SSLLogger$SSLSimpleFormatter);
	return $nc($of(obj))->toString();
}

$String* SSLLogger$SSLSimpleFormatter::lambda$formatCaller$2($Stream* s) {
	$init(SSLLogger$SSLSimpleFormatter);
	$useLocalObjectStack();
	return $cast($String, $$nc($$nc($$nc($nc(s)->dropWhile($$new(SSLLogger$SSLSimpleFormatter$$Lambda$lambda$formatCaller$0$1)))->map($$new(SSLLogger$SSLSimpleFormatter$$Lambda$lambda$formatCaller$1$2)))->findFirst())->orElse("unknown caller"_s));
}

$String* SSLLogger$SSLSimpleFormatter::lambda$formatCaller$1($StackWalker$StackFrame* f) {
	$init(SSLLogger$SSLSimpleFormatter);
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($nc(f)->getFileName()));
	var$0->append(":"_s);
	var$0->append(f->getLineNumber());
	return $str(var$0);
}

bool SSLLogger$SSLSimpleFormatter::lambda$formatCaller$0($StackWalker$StackFrame* f) {
	$init(SSLLogger$SSLSimpleFormatter);
	$useLocalObjectStack();
	bool var$0 = $$nc($nc(f)->getClassName())->startsWith("sun.security.ssl.SSLLogger"_s);
	return var$0 || $$nc(f->getClassName())->startsWith("java.lang.System"_s);
}

void SSLLogger$SSLSimpleFormatter::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(SSLLogger$SSLSimpleFormatter::PATTERN, "yyyy-MM-dd kk:mm:ss.SSS z"_s);
	$init($Locale);
	$assignStatic(SSLLogger$SSLSimpleFormatter::dateTimeFormat, $$nc($DateTimeFormatter::ofPattern(SSLLogger$SSLSimpleFormatter::PATTERN, $Locale::ENGLISH))->withZone($($ZoneId::systemDefault())));
	$assignStatic(SSLLogger$SSLSimpleFormatter::basicCertFormat, $new($MessageFormat, "\"version\"            : \"v{0}\",\n\"serial number\"      : \"{1}\",\n\"signature algorithm\": \"{2}\",\n\"issuer\"             : \"{3}\",\n\"not before\"         : \"{4}\",\n\"not  after\"         : \"{5}\",\n\"subject\"            : \"{6}\",\n\"subject public key\" : \"{7}\"\n"_s, $Locale::ENGLISH));
	$assignStatic(SSLLogger$SSLSimpleFormatter::extendedCertFormart, $new($MessageFormat, "\"version\"            : \"v{0}\",\n\"serial number\"      : \"{1}\",\n\"signature algorithm\": \"{2}\",\n\"issuer\"             : \"{3}\",\n\"not before\"         : \"{4}\",\n\"not  after\"         : \"{5}\",\n\"subject\"            : \"{6}\",\n\"subject public key\" : \"{7}\",\n\"extensions\"         : [\n{8}\n]\n"_s, $Locale::ENGLISH));
	$assignStatic(SSLLogger$SSLSimpleFormatter::messageFormatNoParas, $new($MessageFormat, "\'{\'\n  \"logger\"      : \"{0}\",\n  \"level\"       : \"{1}\",\n  \"thread id\"   : \"{2}\",\n  \"thread name\" : \"{3}\",\n  \"time\"        : \"{4}\",\n  \"caller\"      : \"{5}\",\n  \"message\"     : \"{6}\"\n\'}\'\n"_s, $Locale::ENGLISH));
	$assignStatic(SSLLogger$SSLSimpleFormatter::messageCompactFormatNoParas, $new($MessageFormat, "{0}|{1}|{2}|{3}|{4}|{5}|{6}\n"_s, $Locale::ENGLISH));
	$assignStatic(SSLLogger$SSLSimpleFormatter::messageFormatWithParas, $new($MessageFormat, "\'{\'\n  \"logger\"      : \"{0}\",\n  \"level\"       : \"{1}\",\n  \"thread id\"   : \"{2}\",\n  \"thread name\" : \"{3}\",\n  \"time\"        : \"{4}\",\n  \"caller\"      : \"{5}\",\n  \"message\"     : \"{6}\",\n  \"specifics\"   : [\n{7}\n  ]\n\'}\'\n"_s, $Locale::ENGLISH));
	$assignStatic(SSLLogger$SSLSimpleFormatter::messageCompactFormatWithParas, $new($MessageFormat, "{0}|{1}|{2}|{3}|{4}|{5}|{6} (\n{7}\n)\n"_s, $Locale::ENGLISH));
	$assignStatic(SSLLogger$SSLSimpleFormatter::keyObjectFormat, $new($MessageFormat, "\"{0}\" : \'{\'\n{1}\'}\'\n"_s, $Locale::ENGLISH));
}

SSLLogger$SSLSimpleFormatter::SSLLogger$SSLSimpleFormatter() {
}

$Class* SSLLogger$SSLSimpleFormatter::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.security.ssl.SSLLogger$SSLSimpleFormatter$$Lambda$lambda$formatCaller$2")) {
			return SSLLogger$SSLSimpleFormatter$$Lambda$lambda$formatCaller$2::load$(name, initialize);
		}
		if (name->equals("sun.security.ssl.SSLLogger$SSLSimpleFormatter$$Lambda$lambda$formatCaller$0$1")) {
			return SSLLogger$SSLSimpleFormatter$$Lambda$lambda$formatCaller$0$1::load$(name, initialize);
		}
		if (name->equals("sun.security.ssl.SSLLogger$SSLSimpleFormatter$$Lambda$lambda$formatCaller$1$2")) {
			return SSLLogger$SSLSimpleFormatter$$Lambda$lambda$formatCaller$1$2::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"PATTERN", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLLogger$SSLSimpleFormatter, PATTERN)},
		{"dateTimeFormat", "Ljava/time/format/DateTimeFormatter;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLLogger$SSLSimpleFormatter, dateTimeFormat)},
		{"basicCertFormat", "Ljava/text/MessageFormat;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLLogger$SSLSimpleFormatter, basicCertFormat)},
		{"extendedCertFormart", "Ljava/text/MessageFormat;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLLogger$SSLSimpleFormatter, extendedCertFormart)},
		{"messageFormatNoParas", "Ljava/text/MessageFormat;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLLogger$SSLSimpleFormatter, messageFormatNoParas)},
		{"messageCompactFormatNoParas", "Ljava/text/MessageFormat;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLLogger$SSLSimpleFormatter, messageCompactFormatNoParas)},
		{"messageFormatWithParas", "Ljava/text/MessageFormat;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLLogger$SSLSimpleFormatter, messageFormatWithParas)},
		{"messageCompactFormatWithParas", "Ljava/text/MessageFormat;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLLogger$SSLSimpleFormatter, messageCompactFormatWithParas)},
		{"keyObjectFormat", "Ljava/text/MessageFormat;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLLogger$SSLSimpleFormatter, keyObjectFormat)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SSLLogger$SSLSimpleFormatter, init$, void)},
		{"format", "(Lsun/security/ssl/SSLLogger$SSLConsoleLogger;Ljava/lang/System$Logger$Level;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $staticMethod(SSLLogger$SSLSimpleFormatter, format, $String*, $SSLLogger$SSLConsoleLogger*, $System$Logger$Level*, $String*, $ObjectArray*)},
		{"formatByteArrayInputStream", "(Ljava/io/ByteArrayInputStream;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(SSLLogger$SSLSimpleFormatter, formatByteArrayInputStream, $String*, $ByteArrayInputStream*)},
		{"formatByteBuffer", "(Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(SSLLogger$SSLSimpleFormatter, formatByteBuffer, $String*, $ByteBuffer*)},
		{"formatCaller", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(SSLLogger$SSLSimpleFormatter, formatCaller, $String*)},
		{"formatCertificate", "(Ljava/security/cert/Certificate;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(SSLLogger$SSLSimpleFormatter, formatCertificate, $String*, $Certificate*)},
		{"formatMapEntry", "(Ljava/util/Map$Entry;)Ljava/lang/String;", "(Ljava/util/Map$Entry<Ljava/lang/String;*>;)Ljava/lang/String;", $PRIVATE | $STATIC, $staticMethod(SSLLogger$SSLSimpleFormatter, formatMapEntry, $String*, $Map$Entry*)},
		{"formatObject", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(SSLLogger$SSLSimpleFormatter, formatObject, $String*, Object$*)},
		{"formatParameters", "([Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $staticMethod(SSLLogger$SSLSimpleFormatter, formatParameters, $String*, $ObjectArray*)},
		{"formatThrowable", "(Ljava/lang/Throwable;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(SSLLogger$SSLSimpleFormatter, formatThrowable, $String*, $Throwable*)},
		{"lambda$formatCaller$0", "(Ljava/lang/StackWalker$StackFrame;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SSLLogger$SSLSimpleFormatter, lambda$formatCaller$0, bool, $StackWalker$StackFrame*)},
		{"lambda$formatCaller$1", "(Ljava/lang/StackWalker$StackFrame;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SSLLogger$SSLSimpleFormatter, lambda$formatCaller$1, $String*, $StackWalker$StackFrame*)},
		{"lambda$formatCaller$2", "(Ljava/util/stream/Stream;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SSLLogger$SSLSimpleFormatter, lambda$formatCaller$2, $String*, $Stream*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLLogger$SSLSimpleFormatter", "sun.security.ssl.SSLLogger", "SSLSimpleFormatter", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.SSLLogger$SSLSimpleFormatter",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.SSLLogger"
	};
	$loadClass(SSLLogger$SSLSimpleFormatter, name, initialize, &classInfo$$, SSLLogger$SSLSimpleFormatter::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SSLLogger$SSLSimpleFormatter);
	});
	return class$;
}

$Class* SSLLogger$SSLSimpleFormatter::class$ = nullptr;

		} // ssl
	} // security
} // sun
#include <jdk/internal/jimage/decompressor/SignatureParser.h>
#include <java/util/List.h>
#include <jdk/internal/jimage/decompressor/SignatureParser$ParseResult.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $SignatureParser$ParseResult = ::jdk::internal::jimage::decompressor::SignatureParser$ParseResult;

namespace jdk {
	namespace internal {
		namespace jimage {
			namespace decompressor {

void SignatureParser::init$() {
}

$String* SignatureParser::reconstruct($String* formatted, $List* arguments) {
	$useLocalObjectStack();
	int32_t arg_index = 0;
	$var($chars, chars, $nc(formatted)->toCharArray());
	$var($StringBuilder, out, $new($StringBuilder));
	for (int32_t i = 0; i < chars->length; ++i) {
		char16_t c = chars->get(i);
		out->append(c);
		switch (c) {
		case u'L':
			{
				$var($String, pkg, $cast($String, $nc(arguments)->get(arg_index)));
				if (!$nc(pkg)->isEmpty()) {
					out->append(pkg)->append("/"_s);
				}
				arg_index += 1;
				out->append($$cast($String, arguments->get(arg_index)));
				arg_index += 1;
				break;
			}
		default:
			{
				break;
			}
		}
	}
	return out->toString();
}

$SignatureParser$ParseResult* SignatureParser::parseSignatureDescriptor($String* str) {
	$useLocalObjectStack();
	$var($SignatureParser$ParseResult, res, $new($SignatureParser$ParseResult));
	$var($chars, chars, $nc(str)->toCharArray());
	$var($StringBuilder, type, nullptr);
	$var($StringBuilder, formatted, $new($StringBuilder));
	for (int32_t i = 0; i < chars->length; ++i) {
		char16_t c = chars->get(i);
		switch (c) {
		case u';':
		case u':':
		case u'<':
			{
				if (type != nullptr) {
					$var($String, fullName, type->toString());
					int32_t endIndex = fullName->lastIndexOf("/"_s);
					$var($String, clazz, fullName);
					$var($String, pkg, ""_s);
					if (endIndex != -1) {
						$assign(pkg, fullName->substring(0, endIndex));
						$assign(clazz, fullName->substring(endIndex + 1));
					}
					$nc(res->types)->add(pkg);
					res->types->add(clazz);
				}
				formatted->append(c);
				$assign(type, nullptr);
				break;
			}
		case u'L':
			{
				if (type == nullptr) {
					$assign(type, $new($StringBuilder));
					formatted->append(c);
				} else {
					type->append(c);
				}
				break;
			}
		default:
			{
				if (type == nullptr) {
					formatted->append(c);
				} else {
					type->append(c);
				}
				break;
			}
		}
	}
	$set(res, formatted, formatted->toString());
	return res;
}

SignatureParser::SignatureParser() {
}

$Class* SignatureParser::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SignatureParser, init$, void)},
		{"parseSignatureDescriptor", "(Ljava/lang/String;)Ljdk/internal/jimage/decompressor/SignatureParser$ParseResult;", nullptr, $PUBLIC | $STATIC, $staticMethod(SignatureParser, parseSignatureDescriptor, $SignatureParser$ParseResult*, $String*)},
		{"reconstruct", "(Ljava/lang/String;Ljava/util/List;)Ljava/lang/String;", "(Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;)Ljava/lang/String;", $PUBLIC | $STATIC, $staticMethod(SignatureParser, reconstruct, $String*, $String*, $List*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.jimage.decompressor.SignatureParser$ParseResult", "jdk.internal.jimage.decompressor.SignatureParser", "ParseResult", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.jimage.decompressor.SignatureParser",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"jdk.internal.jimage.decompressor.SignatureParser$ParseResult"
	};
	$loadClass(SignatureParser, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SignatureParser);
	});
	return class$;
}

$Class* SignatureParser::class$ = nullptr;

			} // decompressor
		} // jimage
	} // internal
} // jdk
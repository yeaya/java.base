#include <Comment.h>
#include <java/io/File.h>
#include <java/io/FileReader.h>
#include <java/io/Reader.h>
#include <java/io/StreamTokenizer.h>
#include <jcpp.h>

#undef TT_EOF

using $File = ::java::io::File;
using $FileReader = ::java::io::FileReader;
using $StreamTokenizer = ::java::io::StreamTokenizer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

void Comment::init$() {
}

void Comment::main($StringArray* args) {
	$useLocalObjectStack();
	$var($File, f, $new($File, $($System::getProperty("test.src"_s, "."_s)), "input.txt"_s));
	int32_t slashIsCommentStart = 1;
	int32_t slashSlashComment = 2;
	int32_t slashStarComment = 4;
	for (int32_t i = 0; i < 8; ++i) {
		$var($FileReader, reader, $new($FileReader, f));
		$var($Throwable, var$0, nullptr);
		try {
			$var($StreamTokenizer, st, $new($StreamTokenizer, reader));
			bool slashCommentFlag = ((i & slashIsCommentStart) != 0);
			bool slashSlashCommentFlag = ((i & slashSlashComment) != 0);
			bool slashStarCommentFlag = ((i & slashStarComment) != 0);
			if (!slashCommentFlag) {
				st->ordinaryChar(u'/');
			}
			st->slashSlashComments(slashSlashCommentFlag);
			st->slashStarComments(slashStarCommentFlag);
			while (st->nextToken() != $StreamTokenizer::TT_EOF) {
				$var($String, token, st->sval);
				if (token == nullptr) {
					continue;
				} else {
					if ((token->compareTo("Error1"_s) == 0) && slashStarCommentFlag) {
						$throwNew($Exception, "Failed to pass one line C comments!"_s);
					}
					if ((token->compareTo("Error2"_s) == 0) && slashStarCommentFlag) {
						$throwNew($Exception, "Failed to pass multi line C comments!"_s);
					}
					if ((token->compareTo("Error3"_s) == 0) && slashSlashCommentFlag) {
						$throwNew($Exception, "Failed to pass C++ comments!"_s);
					}
					if ((token->compareTo("Error4"_s) == 0) && slashCommentFlag) {
						$throwNew($Exception, "Failed to pass / comments!"_s);
					}
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			reader->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

Comment::Comment() {
}

$Class* Comment::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Comment, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Comment, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Comment",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Comment, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Comment);
	});
	return class$;
}

$Class* Comment::class$ = nullptr;
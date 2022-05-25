#pragma once

#define FOREACH_LEXEMES(LEXEME) \
    LEXEME(NONE)                \
    LEXEME(WHITESPACE)          \
    LEXEME(COMMENT)             \
    LEXEME(NEWLINE)             \
    LEXEME(IDENT)               \
    LEXEME(INTEGER)             \
    LEXEME(BREAK)               \
    LEXEME(CASE)                \
    LEXEME(CHAR)                \
    LEXEME(CONST)               \
    LEXEME(CONTINUE)            \
    LEXEME(DEFAULT)             \
    LEXEME(DO)                  \
    LEXEME(DOUBLE)              \
    LEXEME(ELSE)                \
    LEXEME(ENUM)                \
    LEXEME(EXTERN)              \
    LEXEME(FLOAT)               \
    LEXEME(FOR)                 \
    LEXEME(IF)                  \
    LEXEME(INLINE)              \
    LEXEME(INT)                 \
    LEXEME(LONG)                \
    LEXEME(FN)                  \
    LEXEME(LET)                 \
    LEXEME(RETURN)              \
    LEXEME(_NULL)               \
    LEXEME(SHORT)               \
    LEXEME(SIGNED)              \
    LEXEME(SIZEOF)              \
    LEXEME(STATIC)              \
    LEXEME(STRUCT)              \
    LEXEME(SWITCH)              \
    LEXEME(USING)               \
    LEXEME(UNION)               \
    LEXEME(UNSIGNED)            \
    LEXEME(VOLATILE)            \
    LEXEME(WHILE)               \
    LEXEME(ALIGNAS)             \
    LEXEME(ALIGNOF)             \
    LEXEME(BOOL)                \
    LEXEME(LPARENT)             \
    LEXEME(RPARENT)             \
    LEXEME(LBRACKET)            \
    LEXEME(RBRACKET)            \
    LEXEME(LBRACE)              \
    LEXEME(RBRACE)              \
    LEXEME(COMMA)               \
    LEXEME(LCHEVRON)            \
    LEXEME(RCHEVRON)            \
    LEXEME(LCHEVRON_EQ)         \
    LEXEME(RCHEVRON_EQ)         \
    LEXEME(LSHIFT)              \
    LEXEME(RSHIFT)              \
    LEXEME(POUND)               \
    LEXEME(DOUBLE_POUND)        \
    LEXEME(PLUS)                \
    LEXEME(PLUSPLUS)            \
    LEXEME(MINUS)               \
    LEXEME(MINUSMINUS)          \
    LEXEME(EQUALEQUAL)          \
    LEXEME(EQUAL)               \
    LEXEME(PLUS_EQ)  /* += */   \
    LEXEME(MINUS_EQ) /* -= */   \
    LEXEME(STAR_EQ)  /* ... */  \
    LEXEME(SLASH_EQ)            \
    LEXEME(PERCENT_EQ)          \
    LEXEME(AMPERSAND_EQ)        \
    LEXEME(BAR_EQ)              \
    LEXEME(CIRCUMFLEX_EQ)       \
    LEXEME(LSHIFT_EQ)           \
    LEXEME(RSHIFT_EQ)           \
    LEXEME(STAR)                \
    LEXEME(SLASH)               \
    LEXEME(PERCENT)             \
    LEXEME(AMPERSANDAMPERSAND)  \
    LEXEME(AMPERSAND)           \
    LEXEME(BARBAR)              \
    LEXEME(BAR)                 \
    LEXEME(CIRCUMFLEX)          \
    LEXEME(TILDE)               \
    LEXEME(EXCLAMATION)         \
    LEXEME(QUESTION_MARK)       \
    LEXEME(EXCLAMATIONEQUAL)    \
    LEXEME(DOT)                 \
    LEXEME(ARROW)               \
    LEXEME(COLON)               \
    LEXEME(SEMICOLON)           \
    LEXEME(STRING)              \
    LEXEME(CHARACTER)

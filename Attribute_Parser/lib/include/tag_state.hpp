#ifndef HRMLPARSER_LIB_TAG_STATE_H_
#define HRMLPARSER_LIB_TAG_STATE_H_

#include <string>
#include <tag_handler.hpp>

class TagHandler;

class TagState{
public:
    virtual void handleToken(TagHandler& handler, const std::string& token) = 0;
    virtual ~TagState() {}
};

    class InitialTagState : public TagState {
    public:
        void handleToken(TagHandler& handler, const std::string& token) override;
    };

    class KeyTagState: public TagState {
    public:
        void handleToken(TagHandler& handler, const std::string& token) override;
    };

    class ValueTagState: public TagState {
    public:
        void handleToken(TagHandler& handler, const std::string& token) override;
    };

#endif //HRMLPARSER_LIB_TAG_STATE_H_
#pragma once

#include <map>
#include <SFML/Graphics.hpp>

namespace cot {

    class AssetManager {
        std::map<std::string, sf::Texture> _textures;
        std::map<std::string, sf::Font>    _fonts;
    public:
        AssetManager()  = default;
        ~AssetManager() = default;

        void         loadTexture(const std::string& name, const std::string& filename);
        sf::Texture& getTexture(const std::string& name);
        void         loadFont(const std::string& name, const std::string& filename);
        sf::Font&    getFont(const std::string& name);
    };

}
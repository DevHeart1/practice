#!/usr/bin/env python3
from flask import Flask, render_template, request
from flask_babel import Babel

app = Flask(__name__)

class Config:
    '''flask app configuration class'''
    LANGUAGES = ["en", "fr"]
    BABEL_DEFAULT_LOCALE = "en"
    BABEL_DEFAULT_TIMEZONE = "UTC"

# Apply configuration to Flask app
app.config.from_object(Config)

# Initialize Babel
babel = Babel(app)

@babel.localeselector
def get_locale():
    """Determine best match for supported languages"""
    return request.accept_languages.best_match(app.config['LANGUAGES'])



@app.route('/')
def index():
    return render_template('0-index.html')

if __name__ == '__main__':
    app.run(host='0.0.0.0', port='5000')
import React, { Component } from 'react';

class Reusecompo extends Component {
    render() {
        return (
            <>
           
                        <div className='card text-center'>
                            <img src={this.props.imgsrc} alt="" />
                            <div className='card-body'>
                                <h2>{this.props.title}</h2>
                                <span>old price: <del>{this.props.oldprice}</del></span>
                                <br />
                                <span>new price: {this.props.newprice}</span>
                                <br />
                                <button className='btn btn-success'>click</button>
                            </div>
                        </div>
                       
            </>
        );
    }
}

export default Reusecompo;
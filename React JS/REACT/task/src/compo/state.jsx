 import React, { Component } from 'react';

class state extends Component {

    constructor(props){
        super(props);
        this.state=({counter:0})
        // this.state=({name:"jay"})
    }

    btnc=()=>{
        this.setState({counter:this.state.counter+1})
    }
    dicriment=()=>{
        this.setState({counter:this.state.counter-1})
    }
    rm=()=>{
        this.setState({counter:0})
    }


    render() {
        return (
            <>
                <div className='countainer'>
                    <div className='row mt-5'>
                        <div className='col'>
                        <h1>{this.state.counter}</h1>
                        <button className='btn btn-success' onClick={this.btnc}>add</button>
                        <button className='btn btn-primary' onClick={this.dicriment}>less</button>
                        <button className='btn btn-warning' onClick={this.rm}>reomove</button>

                        {/* <h1>{this.state.name}</h1> */}
                        {/* <button className='btn btn-dark' onClick={()=>{this.se tState({na})}}>clk</button> */}
                        </div>
                    </div>
                </div>
            </>
        );
    }
}

export default state;